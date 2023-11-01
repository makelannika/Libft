/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:39:48 by amakela           #+#    #+#             */
/*   Updated: 2023/10/31 15:29:30 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	neg;

	i = 0;
	nbr = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i ++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			neg = 1;
		i ++;
	}
	if (!(str[i] >= 48 && str[i] <= 57))
		return (0);
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = 10 * nbr + str[i] - '0';
		i ++;
	}
	if (neg == 1)
		nbr = nbr * -1;
	return (nbr);
}
/*
int	main(void)
{
	const char	str[] = "+1234";

	printf("%d\n", atoi(str));
	printf("%d", ft_atoi(str));
	return (0);
}*/
