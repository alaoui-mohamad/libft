/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:17:06 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/14 00:52:46 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (!n)
		return (0);
	while (i < n)
	{
		if ((s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
