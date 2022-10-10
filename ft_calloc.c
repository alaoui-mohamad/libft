#include <stdio.h>
#include <string.h>

void	*calloc(size_t nmemb, size_t size)
{
	char *pointer;
	int len;

	len = nmemb * size;
	pointer = malloc(len);
	if (!pointer)
		return (pointer);
	ft_bzero(pointer, len);
	return (pointer);
}