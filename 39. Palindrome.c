#include <stdio.h>
#include <string.h>

char str[1001];

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%s", str);

        int i, j, flag;
        int len = strlen(str);
        int lim = len / 2;

        if (len == 1)
        {
            printf("Yes! It is Palindrome!\n");
            continue;
        }

        for (i = 0, j = len - 1; ; i++, j--)
        {
            if (str[i] == str[j])
            {
                flag = 1;

                if (i == lim)
                {
                    break;
                }
            }

            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            printf("Yes! It is Palindrome!\n");
        }

        else
        {
            printf("Sorry! It is not Palindrome!\n");
        }
    }

    return 0;
}
