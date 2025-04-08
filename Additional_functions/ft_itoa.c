/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <2004924@donga.ac.kr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:52:13 by akkim             #+#    #+#             */
/*   Updated: 2025/04/07 18:38:22 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	num_len(int n, int len)
{
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n > 0)
		return (num_len(n / 10, len + 1));
	else
		return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		s;

	len = num_len(n, 0);
	s = 0;
	num = (char *)malloc((len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	if (n < 0)
	{
		num[0] = '-';
		n = -n;
		s = 1;
	}
	while (len > s)
	{
		num[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (num);
}
