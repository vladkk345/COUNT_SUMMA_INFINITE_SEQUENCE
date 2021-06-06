#include <iostream>
#include <stdio.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int t_ct, int x, limit;
    double sum;
    printf("Введите желаемое количество элементов последовательности:\n");
    
    while (1)
    {
        scanf_s("%d", &limit);
        if (limit <= 0)
            break;

            for (sum = 0, x = 1, t_ct = 1; t_ct <= limit; t_ct++, x++)
            {
                 sum += 1.0 / x;
                 printf("Сумма = %f, когда количество элементов = %d.\n", sum, t_ct);
            }
            printf("--------------\n");

            for (sum = 0, x = 1, t_ct = 1; t_ct <= limit; t_ct++, x++)
            {
                if (x % 2 == 0)
                {
                    sum = sum - 1.0 / x;
                }
                else
                {
                    sum = sum + 1.0 / x;
                }
                
                printf("Сумма = %f, когда количество элементов = %d.\n", sum, t_ct);
            }
            printf("Введите элементы еще раз.\n");
    }
    printf("Конец программы\n");
 
    return 0;
}
