/*
Каждый следующий элемент ряда Фибоначчи получается при сложении двух предыдущих.
  Начиная с 1 и 2, первые 10 элементов будут:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

Найдите сумму всех четных элементов ряда Фибоначчи,
  которые не превышают четыре миллиона.
*/

#include <stdio.h>

#define MAX_VALUE 4000000

int main()
{
  int first = 1;
  int second = 2;

  int next;

  int result = second;

  while (second <= MAX_VALUE)
  {
    next = first + second;
    first = second;
    second = next;

    if (second % 2 == 0)
    {
      result += second;
    }
  }

  printf("result :: %i\n", result);

  return 0;
}

/*
result :: 4613732

[Done] exited with code=0 in 0.069 seconds
*/