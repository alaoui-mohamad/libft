/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello <hello@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:01:02 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/10 19:51:37 by hello            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

int		ft_isalpha(char digit);
int		ft_isdigit(char alpha);
int		ft_isalnum(int alnum);
int		ft_isprint(int pr);
size_t	ft_strlen(const char *str);
int		isascii(int c);
void	*ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);

#endif
