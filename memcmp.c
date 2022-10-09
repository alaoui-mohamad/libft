#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int i;
	char *s1;
	char *s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if(!n)
		return 0;	
	while (i < n)
	{
		if (!s1 || !s2 || *s1 != *s2 )
			return (s1[i]-s2[i]);
		i++;
	}
	return 0;
}
