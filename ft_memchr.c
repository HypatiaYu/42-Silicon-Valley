/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 21:17:07 by hyu               #+#    #+#             */
/*   Updated: 2019/09/28 19:32:51 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		chr;
	size_t				counter;

	counter = 0;
	str = (unsigned char*)s;
	chr = (unsigned char)c;
	while ((str[counter]) && (str[counter] != c) && (counter < n))
		counter++;
	if (str[counter] != '\0')
		return (str + counter);
	else
		return (NULL);
}
