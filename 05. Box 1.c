#include <stdio.h>

void draw_square(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{

    int T, d;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &d);

        draw_square(d);

        if (T != 0)
            printf("\n");
    }

    return 0;
}
