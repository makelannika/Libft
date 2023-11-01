/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:25:59 by amakela           #+#    #+#             */
/*   Updated: 2023/11/01 17:59:25 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if ((!(dst) && (!(src))))
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i ++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dest[] = "Hello";
	char	source[] = "World";
	size_t n = 4;
	printf("%s\n", memcpy((void *)dest, (const void *)source, n));
	printf("%s", ft_memcpy((void *)dest, (const void *)source, n));
	return (0);
}*/
