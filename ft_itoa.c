/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:39:51 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/13 20:04:24 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_number(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	nb;
	size_t	len;
	char	*retu;

	nb = n;
	len = count_number(n);
	retu = (char *)malloc((len + 1) * sizeof(char));
	if (!retu)
		return (0);
	retu[len] = '\0';
	len--;
	if (n < 0)
	{
		retu[0] = '-';
		nb *= -1;
	}
	if (n == 0)
		retu[0] = '0';
	while (nb > 0)
	{
		retu[len] = 48 + (nb % 10);
		nb /= 10;
		len--;
	}
	return (retu);
}
