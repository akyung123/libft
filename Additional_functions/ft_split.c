/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <2004924@donga.ac.kr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:32:46 by akkim             #+#    #+#             */
/*   Updated: 2025/04/14 04:56:00 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_word(char	const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	len_word(char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c)
		len++;
	return (len + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*s_p;
	int		i;
	int		j;
	int		len;

	str = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	i = 0;
	s_p = (char *)s;
	while (i < count_word(s, c))
	{
		len = len_word(s_p, c);
		str[i] = (char *)malloc(len * sizeof(char));
		if (!str[i])
			return (NULL);
		j = 0;
		while (*s_p != c && *s_p)
			str[i][j++] = *s_p++;
		str[i][j] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}
