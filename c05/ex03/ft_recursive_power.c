/*
** C05 ex03 - ft_recursive_power
**
** Напиши функцию, которая возвращает nb в степени power.
** Пример: nb = 2, power = 3 -> 2 * 2 * 2 -> 8.
**
** Условия:
** 1. При power < 0 верни 0.
** 2. При power == 0 верни 1, в том числе для nb == 0.
** 3. Основание nb может быть положительным, нулём, отрицательным.
** 4. Используй рекурсию. Циклы не используй.
**
** Примеры:
** (2, 3) -> 8; (5, 1) -> 5; (7, 0) -> 1;
** (0, 3) -> 0; (0, 0) -> 1; (2, -1) -> 0;
** (-2, 3) -> -8; (-2, 4) -> 16.
**
*/

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{

    int result;

    result = 0;

    if (power < 0)
    {
        return (0);
    }

    if (power == 0 || nb == 0)
    {
        return (1);
    }

    result = ft_recursive_power(nb, power - 1);
    
    return (nb * result);
}

int main(void)
{
    printf("power(2, 3) = %d; expected 8\n",
        ft_recursive_power(2, 3));
    printf("power(3, 4) = %d; expected 81\n",
        ft_recursive_power(3, 4));
    printf("power(5, 1) = %d; expected 5\n",
        ft_recursive_power(5, 1));
    printf("power(7, 0) = %d; expected 1\n",
        ft_recursive_power(7, 0));
    printf("power(0, 3) = %d; expected 0\n",
        ft_recursive_power(0, 3));
    printf("power(0, 0) = %d; expected 1\n",
        ft_recursive_power(0, 0));
    printf("power(2, -1) = %d; expected 0\n",
        ft_recursive_power(2, -1));
    printf("power(-2, 3) = %d; expected -8\n",
        ft_recursive_power(-2, 3));
    printf("power(-2, 4) = %d; expected 16\n",
        ft_recursive_power(-2, 4));
    printf("power(-3, 0) = %d; expected 1\n",
        ft_recursive_power(-3, 0));
    return (0);
}
