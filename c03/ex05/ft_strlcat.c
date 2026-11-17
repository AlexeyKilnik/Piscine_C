// strcat:
// "места достаточно, просто добавляй"
//
// strlcat:
// "буфер имеет размер size — не выйди за его границы
// и оставь место для '\0'"
//
// [1][2][3][4][5][6][7][8][9][\0]
// size = 10
//
// ожидаемая логика
// 1. Сначала определить длину src.
// 2. Найти длину dest, но искать '\0' только в пределах size.
// 3. Если '\0' в dest не встретился до size, дописывать ничего нельзя.
// 4. В таком случае вернуть:
// 	size + длина src
// 5. Если конец dest найден, определить, сколько свободного места осталось.
// 6. Начать добавлять символы src после конца dest.
// 7. Копировать только пока остаётся место ещё и для завершающего '\0'.
// 8. Поставить '\0'.
// 9. Вернуть:
//	исходная длина dest + полная длина src
//
//
// псевдокод
//
// узнать длину src
//
// найти конец dest, но максимум до size
//
// если конца dest в пределах size нет:
//    ничего не дописывать
//    вернуть size + длина src
//
// иначе:
//    дописать столько src, сколько помещается
//    оставить место для '\0'
//    поставить '\0'
//
// вернуть длина dest + длина src
//
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	// Реализовать
	unsigned int src_len;
	unsigned int dest_len;
	unsigned int i;

	i = 0;
	src_len = 0;
	dest_len =0;

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	while (dest[dest_len] != '\0' && dest_len < size)
	{
		dest_len++;
	}

	if (dest_len == size)
	{
		return (size + src_len);
	}

	while (dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest_len + src_len);

// dest_len = 5
// dest[dest_len + i]
// dest_len + i + 1 < size

}

int	main(void)
{
	char			dest[20] = "Hello";
	char			src[] = "World";
	unsigned int	result;

	result = ft_strlcat(dest, src, 0);

	printf("dest: %s\n", dest);
	printf("result: %u\n", result);

	return (0);
}
