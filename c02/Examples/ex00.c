#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;


	i = 0; // 3
	while(src[i] != '\0')
	{
		// src[i] == 2 t
		dest[i] = src[i];
		// dest[i] == 2 t
		i++;
	}
	dest[i] = '\0';
	// [c][a][t][\0]
	return (dest);
}

int	main(void)
{
	char	src[] = "Hello";
	char	dest[20];

	ft_strcpy(dest,src);
	printf("%s\n", dest);
	return (0);
}
