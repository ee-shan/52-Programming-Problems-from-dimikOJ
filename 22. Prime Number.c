#include <stdio.h>
#include <math.h>

#define limit 100002
char checker[limit];

void sieve()
{
  int i, j, root;

  for (i = 2; i < limit; i++)
    checker[i] = 1;

  root = sqrt(limit);

  for (i = 2; i <= root; i++)
  {
    if (checker[i] == 1)
    {
      for (j = i; i * j <= limit; j++)
        checker[i * j] = 0;
    }
  }
}

int main()
{
  sieve();

  int t;

  scanf("%d", &t);

  int a, b, i, count;
  while (t--)
  {
    count = 0;

    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
    {
      if (checker[i] == 1)
        count++;
    }

    printf("%d\n", count);
  }

  return 0;
}