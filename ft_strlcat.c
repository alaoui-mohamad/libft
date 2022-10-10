/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hello <hello@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:51:29 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/10 22:11:02 by hello            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{

    size_t len_dest;
    size_t len_src;

    len_dest = strlen(dst);
    len_src = strlen(src);
    if(size > len_dest )
        return (len_src+len_dest);
    while(*src &&  ++len_dest < size)
        *dst++ = *src++;
    return (size+len_dest);
}
int main()
{
    char dest[10] = "alaoui";
    char src[10]  = "best";
int i;
    i = strlcat(dest,src,10);
    printf("%d l %s",i,dest);
    return 0;
}
