// Функция должна преобразовать все строчные английские буквы в строке в заглавные.
// Остальные символы изменять не нужно.
// После изменения строки функция должна вернуть str.
//
// Ожидаемая логика
// 1. Берём первый символ.
// 2. Проверяем, является ли он строчной английской буквой.
// 3. Если да, преобразуем его в заглавную.
// 4. Если нет, оставляем без изменений.
// 5. Переходим к следующему символу.
// 6. После обработки всей строки возвращаем str.

#include <stdio.h>

char *ft_strupcase(char *str)
{
    // Реализовать функцию
    int i;

    i = 0;

    while (str[i] != '\0')
    {
    	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	else
	{
		i++;
	}
    }
    return (str);
}

int main(void)
{
    char str1[] = "hello"; // HELLO
    char str2[] = "Hello World!"; // HELLO WORLD!
    char str3[] = "football123"; // FOOTBALL123

    ft_strupcase(str1);
    ft_strupcase(str2);
    ft_strupcase(str3);

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return (0);
}
