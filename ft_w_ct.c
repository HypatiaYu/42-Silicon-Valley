/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 19:33:23 by hyu               #+#    #+#             */
/*   Updated: 2019/10/05 20:15:43 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_w_ct(const char *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s[j] != c && s[j] != '\0')
	{
		i++;
		j++;
	}
	while (s[j])
	{
		if (s[j] == c)
		{
			j++;
			if (s[j] != c && s[j] != '\0')
				i++;
		}
		j++;
	}
	return (i);
}
