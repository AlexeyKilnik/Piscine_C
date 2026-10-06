#include <stdio.h>
char *ft_strlowcase(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);

}

int main(void)
{
	char str1[] = "hello";
	char str2[] = "HeLLo";
	char str3[] = "BoMba123";

	ft_strlowcase(str1);
	ft_strlowcase(str2);
        ft_strlowcase(str3);

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);

	return (0);
	
}
