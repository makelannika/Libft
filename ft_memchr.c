/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:22:24 by amakela           #+#    #+#             */
/*   Updated: 2023/10/31 18:50:38 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	size_t					j;
	unsigned const char		*str;
	unsigned char			ch;

	i = 0;
	str = s;
	j = ft_strlen((const char *)str);
	ch = (unsigned char)c;
	while (i <= j && i < n)
	{
		if (str[i] == ch)
			return ((void *) &str[i]);
		i ++;
	}
	return (0);
}
