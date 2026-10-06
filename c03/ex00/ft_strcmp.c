// Функция сравнивает две строки посимвольно.
// Строки одинаковые - 0
// Если символы отличаютя то вернуть разницу первых отличающихся символов
//  return (str1[i] - str2[i])
//
// "cat"
// "car"
// c == c
// a == a
// t != r
//
// Ожидаемая логика
// 1.берём первые символы строк
// 2.сравниваем символы пока они одинаковые и пока первая строка не закончилась
// 3.если нашли отличие, то возращаем разницу
// 4. если не нашли разницу, то возращаем разницу

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	// Реализовать
	int i;

	i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++; 
		}
		else
		{
			return (s1[i] - s2[i]);	
		}
		
	}
	return (s1[i] - s2[i]);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && (s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d\n", ft_strcmp("cat", "cat"));
	printf("%d\n", ft_strcmp("cat", "car"));
	printf("%d\n", ft_strcmp("car", "cat"));
	printf("%d\n", ft_strcmp("cat", "catalog")); // c == c, a == a, t == t, \0 != a
	printf("%d\n", ft_strcmp("", ""));

	return (0);
}
