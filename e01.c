/*
Если выписать все натуральные числа меньше 10, кратные 3 или 5,
  то получим 3, 5, 6 и 9. Сумма этих чисел равна 23.

Найдите сумму всех чисел меньше 1000, кратных 3 или 5.
*/

#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("result :: %i\n", sum);

    return 0;
}

/*
result :: 233168

[Done] exited with code=0 in 0.067 seconds
*/