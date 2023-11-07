/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:43:41 by amakela           #+#    #+#             */
/*   Updated: 2023/11/07 20:37:23 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int word_count(char const *s, char c);

char **ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	strl;
	char			**array;
	
	i = 0;
	j = 0;
	s = ft_strtrim(s, &c);
	array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!array)
		return (NULL);
	while (s[i])
	{
		strl = 0;
		while (s[i] && s[i] != c)
		{
			strl ++;
			i ++;
		}
		array[j] = ft_substr(s, i - strl, strl); 
		j ++;
		while (s[i] == c)
			i ++;
	}
	array[j] = 0;
	return (array);
}

int word_count(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 1;
    while(s[i])
    {
        while (s[i] && s[i] != c)
            i ++;
        if (s[i] == c)
            count ++;
        while (s[i] == c)
            i ++;
    }
    if (count == 1)
        count ++;
    return (count);
}

 int	main(void)
 {
 	const char *input1 = ",,,MON,TUE,,WED, ";
     char **result1 = ft_split(input1, ',');
   
    printf("Result 1:\n");
    for (int i = 0; result1[i] != 0; i++) {
        printf("%s\n",  result1[0]);
//      free(result1[i]);
    }
  //  free(result1);
 	return (0);
 }
