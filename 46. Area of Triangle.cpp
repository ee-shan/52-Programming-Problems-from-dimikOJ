#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - (double)a) * (s - (double)b) * (s - (double)c));

        printf("Area = %0.3f\n", area);
    }

    return 0;
}
