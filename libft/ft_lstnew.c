/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 17:43:23 by hyu               #+#    #+#             */
/*   Updated: 2019/09/28 18:28:50 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*link;
	void const	*cp_content;
	size_t		cp_content_size;

	if (!(link = malloc(sizeof(cp_content_size))))
		return (NULL);
	link->data = cp_content;
	link->next = NULL;
	return (link);
}
