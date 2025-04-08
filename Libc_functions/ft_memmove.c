/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <2004924@donga.ac.kr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:14:50 by akkim             #+#    #+#             */
/*   Updated: 2025/03/31 13:34:06 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdint.h>

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*src_p;
	unsigned char	*dest_p;

	src_p = (unsigned char *)src;
	dest_p = (unsigned char *)dest;
	if (dest == NULL || src == NULL || num > MAX_SIZE)
		return (NULL);
	if (dest == src || num == 0)
		return (dest);
	if (dest < src)
		while (num--)
			*dest_p++ = *src_p++;
	if (dest > src)
	{
		dest_p += num;
		src_p += num;
		while (num--)
			*(--dest_p) = *(--src_p);
	}
	return (dest);
}
