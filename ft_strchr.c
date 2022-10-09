/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:16:39 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/09 13:16:43 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(char *str, int c)
{
	int i;
	char *s;

	i = 0;
	s = str;
	if (!s)
		return 0;
while (*s)
{
	if(*s == c)
		return (s);
	s++;
}
return 0;
}
