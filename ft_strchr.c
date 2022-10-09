#include <stdio.h>
#include <string.h>

char *ft_strchr(char *str, int c)
{
	int i;
	char *s;

	i = 0;
	s = str;
	if (!s)
		return 0;
while (*s)
{
	if(*s == c)
		return (s);
	s++;
}
return 0;
}
