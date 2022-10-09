/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:07:48 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/07 18:35:49 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t size)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)dest;
	while (i < size)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}	
	return (string);
}
