/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:01:05 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/13 17:38:23 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!*needle && haystack == needle)
		return ((char *)haystack);
	n = ft_strlen(needle);
	while (*haystack && n <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, n)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
