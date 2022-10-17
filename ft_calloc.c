/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:25:18 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/14 00:27:26 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *pointer;

	pointer = malloc(count * sizeof(size));
	if (!pointer)
		return (pointer);
	ft_bzero(pointer, count*size);
	return (pointer);
}
