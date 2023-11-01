/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:24:26 by amakela           #+#    #+#             */
/*   Updated: 2023/11/01 19:07:52 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	length;
	int	i;

	i = 0;
	length = ft_strlen(s);
	while (i <= length)
		if (s[i] != c)
			i++;
	else
		return ((char *)&s[i]);
	return (0);
}
