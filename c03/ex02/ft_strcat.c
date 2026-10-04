// Ожидаемая логика
// 1.начнём спервого символа dest
// 2. идём по dest пока не дойдём до \0
// 3. запоминаем позицию конца dest
// 4. начнём с первого символа src
// 5. копируем src в dest, начиная с сохранённой позиции
// 6. двигаемся одовременно по src и dest
// 7. когда src закончилось записываем в dest новый \0 в конец строки
// 8. возращаем dest

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	// Реализовать
	int i;
	int c;

	i = 0;
	c = 0;

	while(dest[i] != '\0')
	{
		i++;
	}

	while(src[c] != '\0')
	{
		dest[i] = src[c];
		c++;
		i++;	
	}
	dest[i] = '\0';
	return(dest);
}

int	main(void)
{
	char	dest[50] = "Hello ";
	char	src[] = "Alexey";

	ft_strcat(dest, src);

	printf("%s\n", dest);

	return (0);
}
