#include <iostream>
#include <string>

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
        std::string tempans = std::to_string(ans);
        int zero_count = 0;
        for (int i = tempans.length() - 1; i > 0; i--)
        {
            if (tempans[i] == '0')
            {
                zero_count++;
            }
            else
            {
                break;
            }
        }

        std::cout << zero_count << std::endl;
    }
    return 0;
}