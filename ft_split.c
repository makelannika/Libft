/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:43:41 by amakela           #+#    #+#             */
/*   Updated: 2023/11/14 13:44:23 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		word_count(char const *s, char c);
static char		**freestr(char **array, int j);
static char		**fill_array(char **array, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char			**array;

	if (!s)
		return (0);
	array = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!array)
		return (NULL);
	return (fill_array(array, s, c));
}

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i ++;
		if (s[i] && s[i] != c)
			count ++;
		while (s[i] && s[i] != c)
			i ++;
	}
	return (count);
}

static char	**fill_array(char **array, char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	strl;

	i = 0;
	j = 0;
	while (s[i])
	{
		strl = 0;
		while (s[i] && s[i] != c)
		{
			strl ++;
			i ++;
		}
		if (strl != 0)
		{
			array[j++] = ft_substr(s, i - strl, strl);
			if (array[j - 1] == 0)
				return (freestr(array, j));
		}
		while (s[i] && s[i] == c)
			i ++;
	}
	array[j] = 0;
	return (array);
}

static char	**freestr(char **array, int j)
{
	int	i;

	i = 0;
	while (array[i] && i < j)
	{
		free(array[i]);
		i ++;
	}
	free(array);
	return (NULL);
}
/*
 int	main(void)
 {
	char *s = "MON";
	char **result = ft_split(s, ',');

    for (int i = 0; result[i] != 0; i++) {
        printf("%s\n",  result[i]);
      free(result[i]);
    }
	free(result);
 	return (0);
}*/
