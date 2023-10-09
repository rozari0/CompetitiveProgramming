#include <iostream>

int main()
{
    int T, n;
    std::cin >> T;
    while (T > 0)
    {
        std::cin >> n;
        unsigned long long ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = ans * i;
        }
        T--;
        std::cout << ans << std::endl;
    }
    return 0;
}