/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 11:19:48 by hyu               #+#    #+#             */
/*   Updated: 2019/09/28 18:29:58 by hyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	size_t		len_s;
	char		*trim_string;

	i = 0;
	j = 0;
	len_s = ft_strlen(s);
	if (!(s))
		return (NULL);
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		i++;
	}
	while (s[i + j] && s[i + j] != ' ' && s[i + j] != '\n' && s[i + j] != '\t'
			&& (i + j) < len_s)
	{
		j++;
	}
	if (!(trim_string = (char*)malloc((j + 1) * sizeof(char))))
		return (NULL);
	ft_strncpy(trim_string, (s + i), (j + 1));
	return (trim_string);
}
