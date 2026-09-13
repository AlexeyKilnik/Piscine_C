#include <stdio.h>

void set_zero(int *number)
{
	*number = 0;
}

int main(void)
{
	int number;

	number = 42;
	set_zero(&number);

	printf("%d\n", number); 

	return (0);
}
