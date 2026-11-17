/*
C05 ex07 — ft_find_next_prime

Верни наименьшее простое число, которое БОЛЬШЕ ЛИБО РАВНО nb.
Если исходное число уже простое, верни его же.
Примеры: -5 -> 2, 0 -> 2, 1 -> 2, 2 -> 2, 8 -> 11, 11 -> 11.

Ожидаемая логика:
1. Сначала скопируй сюда свою проверенную ft_is_prime из ex06.
2. Объяви переменную is_prime для ответа этой функции.
3. Если nb меньше 2, начни поиск с 2. Это уже сделано.
4. Вызови ft_is_prime(nb) и сохрани ответ в is_prime.
5. Пока is_prime равен 0, увеличивай nb на 1.
6. После увеличения заново проверяй число, обновляй is_prime.
7. Когда найдёшь простое число, верни само nb, а не is_prime.

В этом файле должны быть обе функции, ft_is_prime — выше.
При сборке ex07 не добавляй отдельный файл функции из ex06.
Вычисления, вызов функции и return записывай отдельными шагами.
*/

#include <stdio.h>

int ft_is_prime(int nb)
{
    int dv;
    int rm;

    dv = 2;
    rm = 0;

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

int ft_find_next_prime(int nb)
{
    int is_prime;

    is_prime = 0;
    
    if (nb < 2)
    {
        nb = 2;
    }

    is_prime = ft_is_prime(nb);

    while (is_prime == 0)
    {
        nb++;
        is_prime = ft_is_prime(nb);
    }
    return(nb);


}

int main(void)
{
    int result;

    result = ft_find_next_prime(-5);
    printf("ft_find_next_prime(-5) = %d; expected 2\n", result);

    result = ft_find_next_prime(0);
    printf("ft_find_next_prime(0) = %d; expected 2\n", result);

    result = ft_find_next_prime(1);
    printf("ft_find_next_prime(1) = %d; expected 2\n", result);

    result = ft_find_next_prime(2);
    printf("ft_find_next_prime(2) = %d; expected 2\n", result);

    result = ft_find_next_prime(3);
    printf("ft_find_next_prime(3) = %d; expected 3\n", result);

    result = ft_find_next_prime(4);
    printf("ft_find_next_prime(4) = %d; expected 5\n", result);

    result = ft_find_next_prime(8);
    printf("ft_find_next_prime(8) = %d; expected 11\n", result);

    result = ft_find_next_prime(11);
    printf("ft_find_next_prime(11) = %d; expected 11\n", result);

    result = ft_find_next_prime(14);
    printf("ft_find_next_prime(14) = %d; expected 17\n", result);

    result = ft_find_next_prime(25);
    printf("ft_find_next_prime(25) = %d; expected 29\n", result);

    result = ft_find_next_prime(48);
    printf("ft_find_next_prime(48) = %d; expected 53\n", result);

    return (0);
}
