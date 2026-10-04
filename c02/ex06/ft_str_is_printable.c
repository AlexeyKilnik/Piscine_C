// Функция должна проверить, содержит ли строка исключительно печатаемые символы.
//  Если все символы печатаемые, возвращаем 1.
// Если встретился хотя бы один непечатаемый символ, возвращаем 0.
// Пустая строка возвращает 1.

#include <stdio.h>

int ft_str_is_printable(char *str)
{
    // Реализовать функцию
    int i;

    i = 0;

    while (str[i] != '\0')
    {
    	if (str[i] >= 32 && str[i] <= 126)
	{
		i++;
	}
	else
	{
		return (0);
	}	
    }
    return (1);
}

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello World";
    char str3[] = "12345";
    char str4[] = "Hello\nWorld";
    char str5[] = "Hello\tWorld";
    char str6[] = "";

    printf("Hello: %d\n", ft_str_is_printable(str1));
    printf("Hello World: %d\n", ft_str_is_printable(str2));
    printf("12345: %d\n", ft_str_is_printable(str3));
    printf("Hello newline World: %d\n", ft_str_is_printable(str4));
    printf("Hello tab World: %d\n", ft_str_is_printable(str5));
    printf("Empty: %d\n", ft_str_is_printable(str6));

    return (0);
}
