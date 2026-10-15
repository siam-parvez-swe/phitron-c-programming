#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    if (1 <= n <= 100000)
    {
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {

            sum = sum + a[i];
        }
        if (sum >= 0)
        {
            printf("%lld", sum);
        }
        else if (sum < 0)
        {
            printf("%lld", sum * (-1));
        }
    }

    return 0;
}