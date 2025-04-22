/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <2004924@donga.ac.kr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:08:50 by akkim             #+#    #+#             */
/*   Updated: 2025/04/01 14:11:56 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (*str != '\0' && len > 0)
	{
		i = 0;
		if (*str == *to_find)
		{
			while (*(to_find + i) != '\0' && str[i] == to_find[i] && i < len)
				i++;
			if (*(to_find + i) == '\0')
				return ((char *)str);
		}	
		str++;
		len--;
	}
	return (NULL);
}
