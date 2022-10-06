/*
2520 - самое маленькое число, которое делится
  без остатка на все числа от 1 до 10.

Какое самое маленькое число делится нацело
  на все числа от 1 до 20?
*/

#include <stdio.h>

int main()
{
    int number = 2520;
    int counter = 0;

    int is_success = 1;
    while (is_success)
    {
        counter = 0;

        for (int i = 1; i <= 20; i++)
        {
            if (number % i == 0)
            {
                counter++;
            }
        }

        if (counter == 20)
        {
            is_success = 0;
            break;
        }

        number += 1;
    }

    printf("result :: %i\n", number);
    return 0;
}

/*
result :: 232792560

[Done] exited with code=0 in 35.245 seconds
*/