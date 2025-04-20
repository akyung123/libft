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

static int	num_len(int n)
{
	if (n == 0)
		return (0);
	if (n == -2147483648)
		return (10);
	if (n < 0)
		return (1 + num_len(-n));
	return (1 + num_len(n /10));
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		s;

	len = num_len(n);
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
	num[len] = '\0';
	while (n > 0)
	{
		num[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (num);
}
