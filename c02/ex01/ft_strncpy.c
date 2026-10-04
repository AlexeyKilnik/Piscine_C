#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    // Реализуй функцию
    unsigned int i;

    i = 0;
    while(src[i] != '\0' && i < n)
    {
    	dest[i] = src[i];
	i++;
    }
    
    while(i < n)
    {
    	dest[i] = '\0';
	i++;
    }
    
    return (dest);
}

int main(void)
{
    char src[] = "Football";
    char dest[20];

    ft_strncpy(dest, src, 4);

    printf("Результат: %.4s\n", dest);

    return (0);
}
