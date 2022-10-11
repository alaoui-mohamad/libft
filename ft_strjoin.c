/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:51:13 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/11 03:11:30 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len_s1;
	int		len_s2;
	int		total_len;
	char	*new_str;

	if (!s1 || !s2)
		return (0);
	len_s1 = strlen((char *)s1);
	len_s2 = strlen((char *)s2);
	total_len = len_s1 + len_s2 + 1;
	if (!(new_str = (char *)malloc(total_len)))
		return (0);
	i = -1;
	while (s1[++i])
		new_str[i] = s1[i];
	ft_strcat(new_str, (char *)s2);
	return (new_str);
}
