#include "libft.h"

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    ft_memset(str+10,'.',4);
    printf("%s",str);
    return 0;
}
