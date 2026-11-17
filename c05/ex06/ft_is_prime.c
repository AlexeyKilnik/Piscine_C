/*
C05 ex06 — ft_is_prime

Создай функцию, которая проверяет, является ли nb простым числом.
Верни 1, если число простое, и 0 в остальных случаях.
Простое число больше 1 и делится без остатка только на 1 и себя.
Примеры: -5 -> 0, 0 -> 0, 1 -> 0, 2 -> 1, 7 -> 1, 9 -> 0.

Ожидаемая логика:
1. Проверка nb < 2 уже дана.
2. Объяви divisor для делителя и remainder для остатка.
3. Начни проверку с делителя 2.
4. Пока divisor меньше nb, вычисляй остаток nb % divisor.
5. Если остаток равен 0, число составное: сразу верни 0.
6. Иначе увеличь делитель на 1 и продолжи проверку.
7. Если цикл закончился без найденного делителя, верни 1.

Не проверяй деление на 1 и на само nb: они подходят любому nb >= 2.
В самой функции ничего не печатай. main.c дан для проверки.
Основной вариант урока рассчитан на небольшие числа.
*/

#include <stdio.h>

int ft_is_prime(int nb)
{
    int dv;
    int rm;
    int result;

    dv = 2;
    rm = 0;
    result = 0;

    if (nb < 2)
    {
        return (0);
    }

    while (dv < nb)
    {
        rm = nb % dv;

        if (rm == 0)
        {
            return (0);
        }
        else 
        {
            dv ++;
        }
    }
    return (1);
}

int main(void)
{
    int result;

    result = ft_is_prime(-5);
    printf("ft_is_prime(-5) = %d; expected 0\n", result);

    result = ft_is_prime(0);
    printf("ft_is_prime(0) = %d; expected 0\n", result);

    result = ft_is_prime(1);
    printf("ft_is_prime(1) = %d; expected 0\n", result);

    result = ft_is_prime(2);
    printf("ft_is_prime(2) = %d; expected 1\n", result);

    result = ft_is_prime(3);
    printf("ft_is_prime(3) = %d; expected 1\n", result);

    result = ft_is_prime(4);
    printf("ft_is_prime(4) = %d; expected 0\n", result);

    result = ft_is_prime(7);
    printf("ft_is_prime(7) = %d; expected 1\n", result);

    result = ft_is_prime(9);
    printf("ft_is_prime(9) = %d; expected 0\n", result);

    result = ft_is_prime(11);
    printf("ft_is_prime(11) = %d; expected 1\n", result);

    result = ft_is_prime(25);
    printf("ft_is_prime(25) = %d; expected 0\n", result);

    return (0);
}