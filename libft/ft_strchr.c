/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 11:30:17 by hyu               #+#    #+#             */
/*   Updated: 2019/09/27 19:16:17 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		counter;
	char	*str;

	str = (char *)s;
	counter = 0;
	if (c == '\0')
		return (NULL);
	while ((str[counter]) && (str[counter] != c))
		counter++;
	if (str[counter] != '\0')
		return (str + counter);
	else
		return (NULL);
}
