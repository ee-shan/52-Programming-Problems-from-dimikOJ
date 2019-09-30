#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int r1, r2, B;
        scanf("%d %d %d", &r1, &r2, &B);

        int ball_played = 300 - B;

        double cur_rate = (r2 * 1.0) / (ball_played / 6.0);

        int runs_req = r1 + 1 - r2;

        double req_rate = (runs_req * 1.0) / (B / 6.0);

        if (runs_req <= 0)
            req_rate = 0;

        printf("%0.2lf %0.2lf\n", cur_rate, req_rate);
    }

    return 0;
}
