/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:16:54 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/18 16:12:57 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	ch;

	i = 0;
	s = (unsigned char *)str;
	ch = (unsigned char)c;
	if(!n)
		return (0);
	if (!s && !n)
		return (0);
	while (i < n)
	{
		if (*s == ch)
		{
			return (s);
		}
		s++;
		i++;
	}
	return (0);
}
