#include <bits/stdc++.h>

using namespace std;

int power(int b, int e)
{
    int res = 1;
    for (int i = 1; i <= e; i++) res *= b;

    return res;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int x, k;
        cin >> x >> k;

        int sum = 0;
        for (int i = 0; i <= k; i++)
        {
            sum += power(x, i);
        }

        cout << "Result = " << sum << endl;
    }

    return 0;
}
