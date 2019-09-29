/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:32:35 by hyu               #+#    #+#             */
/*   Updated: 2019/09/28 21:12:07 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sorc;
	size_t			i;

	i = 0;
	dest = (unsigned char*)dst;
	sorc = (unsigned char*)src;
	if (dst == NULL || src == NULL)
		return (NULL);
	while ((i < n) && sorc[i])
	{
		dest[i] = sorc[i];
		i--;
	}
	dest[i] = '\0';
	return (dest);
}
