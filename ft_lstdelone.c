/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:05:13 by hyu               #+#    #+#             */
/*   Updated: 2019/09/28 18:09:40 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *elem;

	elem = *begin_list;
	if (!elem)
		return ;
	while (elem)
	{
		temp = elem;
		free(elem);
		elem = temp->next;
	}
	*begin_list = 0;
}
