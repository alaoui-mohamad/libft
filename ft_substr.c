/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:22:10 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/14 17:10:22 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	len_s;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		sub_str = malloc(1);
		if (!(sub_str))
			return (NULL);
		sub_str[0] = '\0';
		return (sub_str);
	}
	if (len_s <= start + len)
		sub_str = malloc(sizeof(char) * (len_s - start + 1));
	else
		sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(sub_str))
		return (0);
	ft_strlcpy(sub_str, (s + start), len + 1);
	return (sub_str);
}
