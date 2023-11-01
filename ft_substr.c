/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:45:12 by amakela           #+#    #+#             */
/*   Updated: 2023/11/01 19:01:15 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char	*substr;

	substr = malloc (len + 1);
	if (!(substr))
		return (NULL);
	if (start >= ft_strlen(s))
		return (substr);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		i ++;
		start ++;
	}
	substr[i] = '\0';
	return (substr);
}

