/*
Число-палиндром с обеих сторон (справа налево и слева направо)
  читается одинаково. Самое большое число-палиндром,
  полученное умножением двух двузначных чисел – 9009 = 91 × 99.

Найдите самый большой палиндром, полученный
  умножением двух трехзначных чисел.
*/

#include <stdio.h>

#define START 100
#define END 999

int is_palindrome(int number);

int main()
{
    long max_palindrome = 0;

    for (long i = END; i > START; i--)
    {
        for (long j = END; j > START; j--)
        {
            long multiply = i * j;

            int is_multiply_palindrome = is_palindrome(multiply);

            if (is_multiply_palindrome)
            {
                max_palindrome = multiply;

                printf("max_palindrome :: %ld\n", max_palindrome);
                printf("i :: %ld\n", i);
                printf("j :: %ld\n", j);

                return 0;
            }
        }
    }

    printf("no palindrome :c\n");
    return 1;
}

int is_palindrome(int number)
{
    int num = number;

    int digit, rev = 0;
    int n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    return n == rev;
}

/*
max_palindrome :: 580085
i :: 995
j :: 583

[Done] exited with code=0 in 0.064 seconds
*/