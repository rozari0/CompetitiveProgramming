#include <stdio.h>

int main()
{
    int T, n;
    scanf("%d",&T);
    while (T > 0)
    {
        scanf("%d",&n);
        unsigned long long ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = ans * i;
        }
        T--;
        printf("%llu\n",ans);
    }
    return 0;
}
