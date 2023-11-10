/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:05:48 by amakela           #+#    #+#             */
/*   Updated: 2023/11/10 18:28:08 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if ((ft_strlen(needle) == 0) && (len == 0))
		return (ptr = (char *)haystack);
	if (len == 0)
		return (NULL);
	while ((haystack[i]) && (needle[j]) && (i < len))
	{
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j ++;
			if (j == ft_strlen(needle))
				return (ptr = (char *)&haystack[i]);
		}
		j = 0;
		i ++;
	}
	if (j == ft_strlen(needle))
		return (ptr = (char *)&haystack[i - j]);
	return (0);
}
/*
int	main(void)
{
	const char s1[30] = "aaabcabcd";
	const char s2[10] = "aabc";
	size_t max = 9;
	printf("%s\n", strnstr(s1, s2, max));
	printf("%s", ft_strnstr(s1, s2, max));
	return (0);
}*/
