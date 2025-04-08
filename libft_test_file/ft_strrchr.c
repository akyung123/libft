/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <2004924@donga.ac.kr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:46:54 by akkim             #+#    #+#             */
/*   Updated: 2025/04/01 13:49:30 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(char *str, int ch)
{
	char	*p;

	p = (char *)str;
	while (*p)
		p++;
	while (p >= str)
	{
		if (*p == (char)ch)
			return (p);
		p--;
	}
	return (NULL);
}
