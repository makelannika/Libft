/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:59:42 by amakela           #+#    #+#             */
/*   Updated: 2023/10/30 17:00:40 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

/*void	initialize(size_t *size, char *str, char *str1, char *str2)
{
	char *s[10];
	char s1[10] = "hays";
	char s2[] = "needle";
	*size = 10;
	*str = *s;
	*str1 = *s1;
	*str2 = *s2;
}

int	main(void)
{
	size_t	*size;
	char	*str;
	char	*str1;
	char	*str2;*/
	char	s[10];
	size_t	size = 10;
	char	str1[10] = "hays";
	char	str2[] = "needle";

/*	printf("%d\n", isalpha('K'));
	printf("%d\n", ft_isalpha('K'));
	printf("\n%d\n", isdigit(6));
	printf("%d\n", ft_isdigit(6));
	printf("\n%d\n", isalnum(111));
	printf("%d\n", ft_isalnum(111));
	printf("\n%d\n", isascii('\t'));
	printf("%d\n", ft_isascii('\t'));
	printf("\n%d\n", isprint(' '));
	printf("%d\n", ft_isprint(' '));
	printf("\n%lu\n", strlen("Hello"));
	printf("%lu\n", ft_strlen("Hello"));
	printf("\n%c\n", toupper('s'));
	printf("%c\n", ft_toupper('s'));
	printf("\n%c\n", tolower(120));
	printf("%c\n", tolower(120));
	printf("\n%d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("\n%s\n", strchr(s1, 'l'));
	printf("%s\n", ft_strchr(s1, 'l'));
	printf("\n%s\n", strrchr(s1, 'l'));
	printf("%s\n", ft_strrchr(s1, 'l'));
	printf("\n%s\n", memset(s, 75, 10));
	printf("%s\n", ft_memset(s, 75, 10));
	printf("\n%s\n", strnstr(s1, s2, 10));
	printf("%s\n", ft_strnstr(s1, s2, 10));
	printf("\n%s\n", memchr(s1, 116, 12));
	printf("%s\n", ft_memchr(s1, 116, 12));
	printf("\n%d\n", memcmp(s1, s2, 6));
	printf("%d\n", ft_memcmp(s1, s2, 6));
	printf("\n%s\n", memcpy(s1, s2, 5));
	printf("%s\n", ft_memcpy(s1, s2, 5));
	printf("\n%lu\n", strlcpy(s2, s1, 5));
	printf("%s\n", s1);
	printf("%lu\n", ft_strlcpy(s2, s1, 5));
	printf("%s\n", s1);*/
	initialize(size, str, str1, str2);
/*	printf("\n%lu\n", strlcat(s1, s2, sz));
	printf("%s\n", s1);
	printf("%lu\n", ft_strlcat(s1, s2, sz));
	printf("%s\n", s1);*/
}


