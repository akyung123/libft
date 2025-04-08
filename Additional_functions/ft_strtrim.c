/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <2004924@donga.ac.kr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 21:46:16 by akkim             #+#    #+#             */
/*   Updated: 2025/04/07 15:45:50 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	finsh;

	start = 0;
	finsh = ft_strlen(s1) - ft_strlen(set);
	while (s1[start] == set[start])
		start++;
	if (start != ft_strlen(set))
		start = 0;
	while (s1[finsh] == set[finsh])
		finsh++;
	if (finsh)
		finsh = ft_strlen(s1);
	str = (char *)malloc((finsh - start + 2) * sizeof(char));
	ft_strlcpy(str, s1 + start, (finsh - start +1));
	return (str);
}
