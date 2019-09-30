#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1000, j = 1; i > 0, j <= 1000; i--, j++)
    {
        printf("%d\t", i);

        if (j % 5 == 0)
            printf("\n");
    }

    return 0;
}
