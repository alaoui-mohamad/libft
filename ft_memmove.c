/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:17:15 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/09 13:17:46 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;
	
	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (s > d)
	{
		while (n-->0)
			d[n] = s[n];
	}
	else 
		memcpy(d,s,n);
}

