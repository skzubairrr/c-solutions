#include <stdio.h>

int main()
{
    int a, b, i;
    char *num[] = {"", "one", "two", "three", "four",
                   "five", "six", "seven", "eight", "nine"};

    scanf("%d", &a);
    scanf("%d", &b);

    for (i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9)
            printf("%s\n", num[i]);
        else if (i % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}
