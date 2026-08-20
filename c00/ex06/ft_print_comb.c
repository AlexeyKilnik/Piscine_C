#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int a;
    int b;
    char tens1;
    char units1;
    char tens2;
    char units2;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            tens1 = (a / 10) + '0';
            units1 = (a % 10) + '0';
            ft_putchar(tens1);
            ft_putchar(units1);
            
            ft_putchar(' ');
            
            tens2 = (b / 10) + '0';
            units2 = (b % 10) + '0';
            ft_putchar(tens2);
            ft_putchar(units2);
            
            if (!(a == 98 && b == 99))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            
            b++;
        }
        a++;
    }
}
