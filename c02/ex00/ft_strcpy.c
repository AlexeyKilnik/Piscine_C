#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    // Напиши функцию здесь
   	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

int main(void)
{
    char src[6] = "Hello";
    char dest[1000];

    ft_strcpy(dest, src);

    printf("Исходная строка: %s\n", src);
    printf("Скопированная строка: %s\n", dest);

    return (0);
}
