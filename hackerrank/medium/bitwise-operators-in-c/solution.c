#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
    int i, j;
    int a, o, x;
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            a = i & j;
            o = i | j;
            x = i ^ j;

            if (a < k && a > max_and)
                max_and = a;

            if (o < k && o > max_or)
                max_or = o;

            if (x < k && x > max_xor)
                max_xor = x;
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);

    return 0;
}
