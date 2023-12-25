#include <stdio.h>
int main()
{

    int n, c;
    scanf("%d %d", &n, &c);
    for (int i = 1; i <= n; i++)
    {
        if (i == c)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}