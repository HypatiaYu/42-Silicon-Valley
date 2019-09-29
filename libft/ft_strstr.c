/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:16:53 by hyu               #+#    #+#             */
/*   Updated: 2019/09/27 11:53:31 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *hay, const char *ndl)
{
	int		hay_count;
	int		ndl_count;
	int		start;
	char	*hay_ret;

	hay_count = 0;
	ndl_count = 0;
	start = 0;
	hay_ret = (char*)hay;
	if (ndl[ndl_count] == '\0')
		return (hay_ret);
	while ((hay[start]) && (hay[start] != ndl[0]))
		start++;
	while ((hay[start + hay_count]) && (ndl[ndl_count])
			&& (hay[start + hay_count] == ndl[ndl_count]))
	{
		hay_count++;
		ndl_count++;
	}
	if (ndl[ndl_count] == '\0')
		return (hay_ret + start);
	else
		return (NULL);
}
