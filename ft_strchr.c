/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:24:26 by amakela           #+#    #+#             */
/*   Updated: 2023/11/09 12:56:41 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		length;
	char	ch;
	int		i;

	i = 0;
	ch = (char)c;
	length = ft_strlen(s);
	while (i <= length)
		if (s[i] != ch)
			i++;
	else
		return ((char *)&s[i]);
	return (0);
}
