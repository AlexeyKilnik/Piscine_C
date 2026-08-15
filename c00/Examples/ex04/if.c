#include <unistd.h>

void	show_temperature(int temperature)
{
	char	result;

	if (temperature < 0)
		result = 'C';
	else
		result = 'W';
	write(1, &result, 1);
}

int	main(void)
{
	show_temperature(-10); // c
	show_temperature(0); //w
	show_temperature(15); //w
	return (0);
}
