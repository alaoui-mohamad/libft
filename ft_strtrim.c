/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:26:28 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/13 19:19:39 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checklen(const char *s)
{
	size_t	len_s1;

	len_s1 = ft_strlen(s);
	if (!(len_s1))
		return (0);
	return (len_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;
	size_t	len_s1;
	char	*new;

	i = -1;
	len_s1 = ft_checklen(s1);
	if (!(ft_strlen(set)))
		return (ft_strdup(s1));
	while (++i < len_s1)
		if (ft_strchr(set, s1[i]) == 0)
			break ;
	start = i;
	i = -1;
	while (++i < len_s1)
		if (ft_strchr(set, s1[len_s1 - i - 1]) == 0)
			break ;
	if (start >= len_s1 - i)
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(char) * (len_s1 - i - start + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s1 + start, len_s1 - i - start + 1);
	return (new);
}
