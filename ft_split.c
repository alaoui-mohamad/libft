/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:02:26 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/13 14:11:17 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *str, char sep)
{
	int	i;
	int	count;
	int	check;

	i = 0;
	count = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] != sep)
		{
			if (!check)
				count++;
			i++;
			check = 1;
		}
		else
		{
			check = 0;
			i++;
		}
	}
	return (count);
}

static char	*ft_strdupo(char *str, int *p_i, char sep)
{
	char	*retu;
	int		len;
	int		i;

	len = 0;
	while (str[*p_i] && str[*p_i] == sep)
		(*p_i)++;
	while (str[*p_i + len] && str[*p_i + len] != sep)
		len++;
	retu = (char *)malloc((len + 1) * sizeof(char));
	if (!retu)
		return (0);
	i = 0;
	while (str[*p_i] && str[*p_i] != sep)
	{
		retu[i] = str[*p_i];
		i++;
		(*p_i)++;
	}
	retu[i] = '\0';
	return (retu);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		word;
	int		index;

	i = 0;
	index = 0;
	word = count_word((char *)s, c);
	res = (char **)malloc((word + 1) * sizeof(char *));
	if (!res)
		return (0);
	while (index < word)
	{
		res[index] = ft_strdupo((char *)s, &i, c);
		index++;
	}
	res[index] = 0;
	return (res);
}
