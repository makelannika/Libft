/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:22:24 by amakela           #+#    #+#             */
/*   Updated: 2023/11/10 18:53:37 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned const char		*str;
	unsigned char			ch;

	i = 0;
	str = s;
	ch = c;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)&str[i]);
		i ++;
	}
	return (0);
}
/*
int	main(void)
{
	char s[] = {0, 1, 2, 3, 4, 5};
	printf("%s\n", memchr(s, 2 + 256, 3));
	printf("%s\n", ft_memchr(s, 2 + 256, 3));
	return (0);
}*/
