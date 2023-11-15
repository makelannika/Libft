/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:04:41 by amakela           #+#    #+#             */
/*   Updated: 2023/11/15 15:17:55 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		count;
	t_list *current;

	count = 0;
	current = lst;
	while (current != NULL)
	{
		count ++;
		current = current->next;
	}
	return (count);
}
