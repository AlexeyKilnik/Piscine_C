// Ожидаемая логика
// 1. Берём первый символ.
// 2. Проверяем, находится ли он в диапазоне от 'a' до 'z'.
// 3. Если да, переходим к следующему символу.
// 4. Если нет, возвращаем 0.
// 5. Если все символы прошли проверку, возвращаем 1.

#include <stdio.h>

int ft_str_is_lowercase(char *str)

{
	int i;

	i = 0;
	while(str[i] != '\0')
	{

		if (str[i] >= 'a' && str[i] <= 'z')
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
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "football";
    char str4[] = "football123";
    char str5[] = "";

    printf("hello: %d\n", ft_str_is_lowercase(str1));
    printf("Hello: %d\n", ft_str_is_lowercase(str2));
    printf("football: %d\n", ft_str_is_lowercase(str3));
    printf("football123: %d\n", ft_str_is_lowercase(str4));
    printf("Empty: %d\n", ft_str_is_lowercase(str5));

    return (0);
}
