#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	int i; 
	unsigned char *s;
	unsigned char ch;

	i = 0;
	s  = (unsigned char *)str;
	ch  = (unsigned char )c;	
	if(!s || !n)
		return 0;
	while(i < n)
	{
		if (*s == ch)
		{
			return (s);
		}
		s++;
		i++;
	}
	return 0;
}

