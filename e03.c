/*
Простые делители числа 13195 - это 5, 7, 13 и 29.

Каков самый большой делитель числа 600851475143,
  являющийся простым числом?
*/

#include <stdio.h>

int is_simple(int number);

int main()
{
    long value = 600851475143;
    int half = value / 2;
    int result = 0;

    for (int i = 2; i >= half; i++)
    {
        int is_devided = value % i == 0;

        if (is_devided)
        {
            int i_is_simple = is_simple(i);

            if (i_is_simple)
            {
                int is_write_result = i > result;

                if (is_write_result)
                {
                    result = i;
                }
            }
        }
    }

    printf("result :: %i\n", result);

    return 0;
}

int is_simple(int number)
{
    int half = number / 2;

    for (int i = 2; i < half; i++)
    {
        int is_number_devided_by_i = number % i == 0;

        if (is_number_devided_by_i)
        {
            return 0;
        }
    }

    return 1;
}

/*
result :: 6857

[Done] exited with code=0 in 10.476 seconds
*/