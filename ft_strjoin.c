/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:51:13 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/13 22:17:58 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i+j] = src[j];
		j++;
		
	}
	dest[i+j] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len_s1;
	int		len_s2;
	char	*new_str;

	if (!s1 || !s1)
		return 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) *(len_s1 + len_s2 + 1));
	if (!(new_str))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	new_str[i] = '\0';
	ft_strcat(new_str,s2);
	return (new_str);
}
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*str;
// 	int		s1_len;
// 	int		s2_len;
// 	int		i;

// 	i = 0;
// 	if (!s1 || !s2)
// 		return (0);
// 	s1_len = ft_strlen(s1);
// 	s2_len = ft_strlen(s2);
// 	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
// 	if (!str)
// 		return (NULL);
// 	while (s1[i])
// 	{
// 		str[i] = s1[i];
// 		i++;
// 	}
// 	i = 0;
// 	while (s2[i])
// 		str[s1_len++] = s2[i++];
// 	str[s1_len] = '\0';
// 	return (str);
// }