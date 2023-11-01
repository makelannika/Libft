/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:27:50 by amakela           #+#    #+#             */
/*   Updated: 2023/11/01 17:20:31 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && (str1[i] != '\0') && (i < n -1))
		i++;
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	size_t	n = 3;
	char	s1[] = "HeLlo";
	char	s2[] = "Hello";

	printf("%d\n", strncmp(s1, s2, n));
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}*/
