#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d = Even\n", i);
        }
        else
        {
            printf("%d = Odd\n", i);
        }
    }
    return 0;
}