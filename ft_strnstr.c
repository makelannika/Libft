/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:05:48 by amakela           #+#    #+#             */
/*   Updated: 2023/11/01 18:47:57 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if ((ft_strlen(needle) == 0) || (len == 0))
		return (ptr = (char *)haystack);
	while ((haystack[i]) && (needle[j]) && (i < len) && (j < ft_strlen(needle)))
	{
		if (haystack[i] == needle[j])
			j ++;
		else
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
	const char *s1 = "oh no not the empty string !";
	const char *s2 = "";
	size_t max = 0;
	printf("%s", ft_strnstr(s1, s2, max));
	return (0);
}*/
