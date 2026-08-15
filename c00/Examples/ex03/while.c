#include <unistd.h>

int	main(void)
{
	char	letter;

	letter = 'c';
	while (letter <= 'g')
	{
		write(1, &letter, 1);
		letter++;
	}
	return (0);
}
