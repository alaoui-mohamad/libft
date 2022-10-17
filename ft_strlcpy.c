/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:35:06 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/11 12:46:14 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	len_src;
	unsigned int	i;

	len_src = 0;
	while ((char)src[len_src])
		len_src++;
	if (dstsize == 0)
		return (len_src);
	i = 0;
	while (--dstsize)
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
