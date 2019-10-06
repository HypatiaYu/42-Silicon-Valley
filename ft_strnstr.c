/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 10:10:31 by hyu               #+#    #+#             */
/*   Updated: 2019/09/20 15:42:11 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	size_t		hay_count;
	size_t		ndl_count;
	size_t		start;
	char		*hay_ret;

	hay_count = 0;
	ndl_count = 0;
	start = 0;
	hay_ret = (char*)hay;
	if (ndl[ndl_count] == '\0')
		return (hay_ret);
	while ((hay[start]) && (hay[start] != ndl[0]) && (hay_count < len))
		start++;
	while ((hay[start + hay_count]) && (ndl[ndl_count])
			&& (hay[start + hay_count] == ndl[ndl_count])
			&& (start + hay_count < len))
	{
		hay_count++;
		ndl_count++;
	}
	if (ndl[ndl_count] == '\0')
		return (hay_ret + start);
	return (NULL);
}
