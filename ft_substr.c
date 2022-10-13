/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:22:10 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/11 19:00:50 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;

	sub_str = (char *)malloc(len);
	if (!(sub_str))
		return (0);
	ft_strlcpy(sub_str, (s + start), len + 1);
	return (sub_str);
}
