/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 13:55:48 by hyu               #+#    #+#             */
/*   Updated: 2019/09/28 18:02:03 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list		*new_node;
	
	new_node = *alst;
	if ((new_node != NULL && new != NULL)
	{
		while (new_node->next)
		{
			new_node = new_node->next;
		}
		new_node->next = new;
	}
	else
		new_node = new;
}

