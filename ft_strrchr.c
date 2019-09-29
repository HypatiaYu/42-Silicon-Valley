/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:35:32 by hyu               #+#    #+#             */
/*   Updated: 2019/09/20 16:49:31 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		first_num;
	char	*str;

	str = (char *)s;
	first_num = 0;
	while ((str[first_num]) && (str[first_num] != c))
		first_num++;
	if (str[first_num] != '\0')
		return (str + first_num);
	else
		return (NULL);
}
