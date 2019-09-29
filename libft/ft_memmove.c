/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:28:46 by hyu               #+#    #+#             */
/*   Updated: 2019/09/24 20:12:40 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	size_t	i;

	i = 0;
	dest = (char*)dst;
	source = (char*)src;
	if (dest > source)
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	else if (dest < source)
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}
