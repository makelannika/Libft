/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:57:21 by amakela           #+#    #+#             */
/*   Updated: 2023/11/08 20:24:11 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	c;
	unsigned int	s1len;
	char			*str;

	i = 0;
	j = 0;
	c = 0;
	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	s1len = ft_strlen(s1);
	if (s1len > 0)
	{
		while (ft_strchr(set, s1[i]) != 0)
			i ++;
		if (i < s1len)
		{
			while (ft_strchr(set, s1[s1len - 1]) != 0)
			{
				j ++;
				s1len --;
			}
		}
	}
	if ((i + j) >= (s1len + j))
	{
		str = malloc (1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc ((ft_strlen(s1) + 1) - (i + j));
	if (!str)
		return (NULL);
	while (i < s1len)
	{
		str[c] = s1[i];
		c ++;
		i ++;
	}
	str[c] = '\0';
	return (str);
}
