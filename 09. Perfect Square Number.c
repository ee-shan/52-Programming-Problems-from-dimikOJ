#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int root = sqrt(N);

        if (root * root == N)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
