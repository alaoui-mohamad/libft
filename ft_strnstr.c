/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello <hello@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:01:05 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/10 19:51:29 by hello            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	int		len;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	len = strlen(to_find);
	while (str[i] && len <= n--)
	{
		if (!(ft_strncmp(str, to_find, len)))
			return (str);
		str++;
		i++;
	}
	return (0);
}
