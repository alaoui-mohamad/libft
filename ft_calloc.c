/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:25:18 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/11 10:24:51 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *pointer;
	int len;

	len = nmemb * size;
	pointer = malloc(len);
	if (!pointer)
		return (pointer);
	ft_bzero(pointer, len);
	return (pointer);
}
