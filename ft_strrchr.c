/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello <hello@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:26:43 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/10 19:51:24 by hello            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	if (!s)
		return (0);
	str = (char *)s;
	len = strlen(s);
	if ((char)c == '\0')
		return (str + len);
	str += len - 1;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str--;
	}
	return (0);
}
