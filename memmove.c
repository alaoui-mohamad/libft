


#include <string.h>
#include <stdio.h>

void	*ft_memmove( void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;
	
	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (s > d)
	{
		while (n-->0)
			d[n] = s[n];
	}
	else 
		memcpy(d,s,n);
}

