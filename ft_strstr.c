/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:16:53 by hyu               #+#    #+#             */
/*   Updated: 2019/10/05 21:09:48 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *hay, const char *ndl)
{
	int		hay_count;
	int		ndl_count;
	int		start;
	int		cycles;
	char	*hay_ret;

	hay_count = 0;
	ndl_count = 0;
	cycles = 0;
	hay_ret = (char*)hay;
	if (!(ndl[ndl_count]))
		return (hay_ret);
	start = ft_start(hay, ndl);
	while (hay[start + hay_count] && ndl[ndl_count])
	{
		while (hay[start + hay_count] == ndl[ndl_count] &&
				ndl[ndl_count] && hay[start + hay_count])
		{
			hay_count++;
			ndl_count++;
		}
		if (ndl[ndl_count] == '\0')
			return (hay_ret + start);
	}
	return (NULL);
}
