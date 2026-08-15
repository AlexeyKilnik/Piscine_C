void	check_number(int number)
{
	char	result;

	if (number > 100)
		result = 'B';
	else
		result = 'S';
	write(1, &result, 1);
}

int main(void)
{
	check_number(150); //b
	check_number(50); //s
	check_number(100); //s
	return(0);
}
