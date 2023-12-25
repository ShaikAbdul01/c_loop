#include <stdio.h>
int main()
{

    int n, b;
    scanf("%d %d", &n, &b);
    for (int i = 1; i <= n; i++)
    {
        if (i == b)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}