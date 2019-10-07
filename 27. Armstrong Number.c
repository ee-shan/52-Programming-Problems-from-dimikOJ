#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while (T--)
    {
        int n;

        scanf("%d", &n);

        int dn = n;

        int temp = 0, t;

        for (int i = 1; i <= 3; i++)
        {
            t = n % 10;
            n /= 10;
            temp += t * t * t;
        }

        if (temp == dn)
            printf("%d is an armstrong number!\n", dn);
        else
            printf("%d is not an armstrong number!\n", dn);
    }

    return 0;
}
