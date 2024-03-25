#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j, i, n, a, b, c, d, e;
    /*menor ou igual a 127 =  preto;
      maior que 127 = branco */

    for (j = 0; j < 100; j++)
    {
        scanf("%d", &n);
        if (n == 0)
        { // n = número de questões
            break;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

                if (a <= 127 && b > 127 && c > 127 && d > 127 && e > 127)
                {
                    printf("A\n");
                }
                else if (a > 127 && b <= 127 && c > 127 && d > 127 && e > 127)
                {
                    printf("B\n");
                }
                else if (a > 127 && b > 127 && c <= 127 && d > 127 && e > 127)
                {
                    printf("C\n");
                }
                else if (a > 127 && b > 127 && c > 127 && d <= 127 && e > 127)
                {
                    printf("D\n");
                }
                else if (a > 127 && b > 127 && c > 127 && d > 127 && e <= 127)
                {
                    printf("E\n");
                }
                else
                {
                    printf("*\n");
                }
            }
        }
    }
    return 0;
}

