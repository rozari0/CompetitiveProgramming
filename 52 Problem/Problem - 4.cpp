#include <iostream>

int main()
{
    int T;
    std::cin >> T;
    int limit = 0;
    while (T > 0)
    {
        std::string output = "Case " + std::to_string(limit + 1) + ":";
        int n, lim = 1;
        std::cin >> n;
        while (lim <= n)
        {
            if (n % lim == 0)
            {
                output = output + " " + std::to_string(lim);
            }
            lim++;
        }
        std::cout
            << output << std::endl;
        T--;
        limit++;
    }
}