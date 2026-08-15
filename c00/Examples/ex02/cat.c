#include <unistd.h>

int main(void)
{
	char cat;
	cat = 'c';
	write(1, &cat, 1);
	cat++;
	write(1, &cat, 1);
	cat++;
	write(1, &cat,1);
	return(0);
}
