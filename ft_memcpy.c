/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello <hello@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:07:48 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/10 19:50:30 by hello            ###   ########.fr       */
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
