
/*
 * C04 — ex02: ft_putnbr
 *
 * ЗАДАНИЕ:
 * Напиши функцию, которая выводит
 * целое число в терминал.
 *
 * Используй только write().
 *
 * ПРИМЕРЫ:
 * ft_putnbr(42)    -> 42
 * ft_putnbr(105)   -> 105
 * ft_putnbr(-123)  -> -123
 * ft_putnbr(0)     -> 0
 *
 * ОЖИДАЕМАЯ ЛОГИКА:
 * 1. Проверь знак числа.
 * 2. Найди самый большой разряд.
 * 3. Получи первую цифру делением.
 * 4. Преобразуй цифру в символ.
 * 5. Выведи символ через write().
 * 6. Убери выведенную цифру из числа.
 * 7. Повтори для остальных разрядов.
 *
 * ВАЖНО:
 * Функция должна работать со всеми
 * допустимыми значениями int.
 *
 * Нельзя использовать printf().
 *
 * 472
 * 472 / 100 = 4
 * 472 % 100 = 72
 * 72 / 10 = 7
 * 72 % 10 = 2
 *
 * 4 + '0'
 */

#include <unistd.h>

void ft_putnbr(int nb)
{
    // Напиши решение здесь
    long number;
    long divisor;
    char digit;

    number = nb;
    divisor = 1;

    if (number < 0)
    {
    	write(1, "-",1);
	number = -number;
    }

    while (number / divisor >= 10)
    {
    	divisor = divisor * 10;
    }

    while (divisor > 0)
    {
	    digit = number / divisor + '0';
	    write(1, &digit,1);
	    number = number % divisor;
	    divisor = divisor / 10;
    }

}

int main(void)
{
    ft_putnbr(42);
    write(1, "\n", 1);

    ft_putnbr(472);
    write(1, "\n", 1);

    ft_putnbr(1005);
    write(1, "\n", 1);

    ft_putnbr(0);
    write(1, "\n", 1);

    ft_putnbr(-123);
    write(1, "\n", 1);

    ft_putnbr(2147483647);
    write(1, "\n", 1);

    ft_putnbr(-2147483648);
    write(1, "\n", 1);

    return (0);
}
