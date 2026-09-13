// * , &, int **, int ***********
//
void change(int *number)
{
	*number = 42;
}

int main(void)
{
       int number;

	number = 10; 
  	change(&number);

	return (0);	
}
