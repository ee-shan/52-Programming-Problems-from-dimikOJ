#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, N;
        cin >> X >> N;

        int res = 0, count = 0;

        while (true)
        {
            res += X;

            if (res > N) break;

            cout << res << endl;
            count++;
        }

        if (!count) cout << "Invalid!" << endl;

        cout << endl;
    }

    return 0;
}
