/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:26:43 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/10 12:59:39 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    char *str;
    size_t len;
   
    if (!s)
		return 0;
    str  = (char *)s;
    len = strlen(s);
    if ((char )c == '\0')
        return (str + len);
    str += len - 1; 
                                                                                 
    while (*str)
    {
       	if(*str == (char )c)
		    return (str);
	    str--;
    }
  return 0;    
}
int main()
{
    char str[100] = "aaeri";
    char str1[100] = "alaoui";
    char *s;
    
   printf("%p", ft_strchr(str,'\0'));
}