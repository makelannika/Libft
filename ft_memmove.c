/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:21:12 by amakela           #+#    #+#             */
/*   Updated: 2023/11/08 11:45:49 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{

	size_t		i;

	i = 0;
	if ((!dst) && (!src))
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
		*((char *)dst + i) = *((char *)src + i);
		i ++;
		}
	}
	else
	{
		while (len > 0)
		{
		*((char *)dst + len - 1) = *((char *)src + len - 1);
		len --;
		}
	}
		return (dst);
}

