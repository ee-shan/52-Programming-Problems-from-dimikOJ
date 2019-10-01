#include <stdio.h>
#include <math.h>

void zero_counter()
{
    int n, i, sum, sol;

    scanf("%d", &n);

    sum = 0;

    for (i = 1; i <= 5; i++)
    {
        if (pow(5, i) > n)
            break;
        else
        {
            sol = n / pow(5, i);
            sum = sum + sol;
        }
    }

    printf("%d\n", sum);
}

int main()
{
    int T;

    scanf("%d", &T);

    while (T--)
    {
        zero_counter();
    }

    return 0;
}
