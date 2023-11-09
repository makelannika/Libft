/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:45:12 by amakela           #+#    #+#             */
/*   Updated: 2023/11/09 22:14:55 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		slen;
	char		*substr;

	i = 0;
	if (s == 0 || start >= ft_strlen(s))
		return (calloc(1, 1));
	slen = ft_strlen(s);
	if (len > slen)
	{
		substr = malloc (slen + 1);
		while (i < slen)
		{
			substr[i] = s[i];
			i ++;
		}
		substr[i] = '\0';
		return (substr);
	}
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len && s[i])
	{
		substr[i] = s[start];
		i ++;
		start ++;
	}
	substr[i] = '\0';
	return (substr);
}
