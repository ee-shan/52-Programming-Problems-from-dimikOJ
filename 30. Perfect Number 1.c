#include <stdio.h>

int main()
{
    int T;

    unsigned long long int n, sum, i; // declare outside the loop

    scanf("%d", &T);

    while (T--)
    {
        sum = 0;

        scanf("%llu", &n);

        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        if (sum == n)
            printf("YES, %llu is a perfect number!\n", n);
        else
            printf("NO, %llu is not a perfect number!\n", n);
    }

    return 0;
}
