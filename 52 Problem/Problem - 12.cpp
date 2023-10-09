#include <iostream>

long long int zero_count(long long int num)
{
    int count = 0;
    while (num % 10 == 0 && num >= 10)
    {
        count++;
        num = num / 10;
    }
    return count;
}

int main()
{
    int T, n;
    std::cin >> T;
    while (T > 0)
    {
        std::cin >> n;
        long long int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = ans * i;
        }
        T--;

        std::cout << zero_count(ans) << std::endl;
    }
    return 0;
}