/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <2004924@donga.ac.kr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:50:06 by akkim             #+#    #+#             */
/*   Updated: 2025/04/01 13:50:09 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# define MAX_SIZE SIZE_MAX

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_atoi(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(char *str, int ch);
char	*ft_strdup(char *src);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *ptr, int value, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void *ptr, int value, size_t num);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
