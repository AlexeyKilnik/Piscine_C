int numbers[3] = {10, 20, 30};

char letters[3];

letters[0] = 'C';
letters[1] = 'a';
letters[2] = 't';

char word[] = "Cat";

[0] => C
[1] => a
[2] => t
[3] => \0

int i;
i = 0;
while(word[i] != '\0')
{
    printf("%c\n", word[i]);
    i++;
}


void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		write(1, str, 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Hello";

	ft_putstr(str);
	return (0);
}


