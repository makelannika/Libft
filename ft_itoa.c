/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:51:00 by amakela           #+#    #+#             */
/*   Updated: 2023/11/07 20:38:47 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_itoa(int n)
{
	int	i;
	int	j;
	int	neg;
	char temp[11];
	char *str;

	i = 0;
	j = 0;
	neg = 0;
	if (n == 0)
	{
		str = malloc (2);
		ft_strlcpy(str, "0", 2);
		return (str);
	}
	if (n == -2147483648)
	{
		str = malloc (12);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (n >= 1)
	{
		temp[i] = n % 10  + '0';
		n = n - n % 10;
		n = n / 10;
		i ++;
	}
	str = malloc (i + neg + 1);
	if (!str)
		return (NULL);
	if (neg == 1)
	{
		str[j] = '-';
		j ++;
	}
	while (i > 0)
	{
		str[j] = temp[i -1];
		j ++;
		i --;
	}
	str[j] = '\0';
	return (str);
}

int	main(void)
{
	printf("%s", ft_itoa(-0));
	return (0);
}
