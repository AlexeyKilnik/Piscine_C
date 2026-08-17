#include <unistd.h>
void	check_number(int n)
{
	char	result;

	if (n < 0)
		result = 'N';
	else
		result = 'P';
	write(1, &result, 1);
}

int main(void)
{
	check_number(5);
	check_number(-3);
	check_number(10);	
	return(0);
}
