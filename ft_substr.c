/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:45:12 by amakela           #+#    #+#             */
/*   Updated: 2023/11/08 19:15:15 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		slen;
	char		*substr;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr[0] = 0;
		return (substr);
	}
	i = 0;
	while (i < len && s[i])
	{
		substr[i] = s[start];
		i ++;
		start ++;
	}
	substr[i] = '\0';
	return (substr);
}

