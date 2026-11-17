// Индекс    0  1  2  3  4  5  6  7   8   9   10
// Значение  0  1  1  2  3  5  8  13  21  34  55

// F(3)
// 1. F(3) previous = F(2) и ждем ответ.
// 2. F(2) получает F(1) = 1 и сохраняет в свой previous
// 3. F(2) получает F(0) = 0 и сохраняет 0 в свой before_previous
// 4. F(2) складывает 1 и 0 и возвращает 1. Теперь previous у F(3) равен 1.
// 5. F(3) before_previous = F(1) и ждем ответ.
// 6. F(3) получает F(1) = 1 и сохраняет в свой before_previous
// 7. F(3) складываем previous(1) и before_previous(1) и возвращает 2.

/*
Задание C05 ex04 — ft_fibonacci

Правила:
1. Отрицательный индекс: вернуть -1.
2. Индекс 0: вернуть 0.
3. Индекс 1: вернуть 1.
4. Для остальных индексов сложить два предыдущих значения.

Ожидаемая логика:
- объяви переменные для двух ответов и общей суммы;
- добавь условия остановки для индексов 0 и 1;
- вызови эту же функцию для index - 1, сохрани ответ;
- вызови эту же функцию для index - 2, сохрани второй ответ;
- сложи ответы в отдельной переменной;
- верни полученную сумму.
*/

#include <stdio.h>

int ft_fibonacci(int index)
{
    int previous;
    int before_previous;
    int result;

    previous = 0;
    before_previous = 0;
    result = 0;

    if (index < 0)
    {
        return(-1);
    }
    if (index == 0)
    {
        return(0);
    }
    if (index == 1)
    {
        return (1);
    }

    previous = ft_fibonacci(index - 1);
    before_previous = ft_fibonacci(index - 2);

    result = previous + before_previous;

    return (result);
}

int main(void)
{
    int result;

    result = ft_fibonacci(-5);
    printf("ft_fibonacci(-5) = %d; expected -1\n", result);

    result = ft_fibonacci(1);
    printf("ft_fibonacci(1) = %d; expected 1\n", result);

    result = ft_fibonacci(0);
    printf("ft_fibonacci(0) = %d; expected 0\n", result);

    result = ft_fibonacci(5);
    printf("ft_fibonacci(5) = %d; expected 5\n", result);

    result = ft_fibonacci(10);
    printf("ft_fibonacci(10) =  ; expected 55\n", result);
    
}