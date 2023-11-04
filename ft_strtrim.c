/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:57:21 by amakela           #+#    #+#             */
/*   Updated: 2023/11/04 19:56:24 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int check_match(char const c, char const *set);

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
	s1len = ft_strlen(s1);
	if (s1len > 0)
	{
		while (check_match(s1[i], set) == 1)
			i ++;
		if (i < s1len)
		{
			while (check_match(s1[s1len - 1], set) == 1)
			{
				j ++;
				s1len --;
			}
		}
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

int	check_match(char const c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

int	main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	printf("%s", ft_strtrim(s1, " \n\t"));
	return (0);
}
