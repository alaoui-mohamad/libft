/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:26:28 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/12 11:30:11 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checklen(char *s)
{
	size_t	len_s1;

	len_s1 = ft_strlen((char *)s);
	if (!(len_s1))
		return (0);
	return (len_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	len_s1;
	size_t	len_set;

	i = -1;
	len_s1 = ft_checklen((char *)s1);
	len_set = ft_strlen((char *)set);
	if (!(len_set))
		return (ft_strdup(s1));
	while (++i < len_s1)
		if (ft_strchr(set, s1[i]) == 0)
			break ;
	start = i;
	i = -1;
	while (++i < len_s1)
		if (ft_strchr(set, s1[len_s1 - i - 1]) == 0)
			break ;
	end = len_s1 - i;
	if (start >= end)
		return (ft_strdup(""));
	s1 = ft_substr(s1, start, end - start);
	return ((char *)s1);
}
