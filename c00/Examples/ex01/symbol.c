#include <unistd.h>

void	show_symbol(char symbol)
{
	write(1, &symbol, 1);
}
