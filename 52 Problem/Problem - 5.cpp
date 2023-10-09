#include <iostream>

int main()
{
    int T, n;
    std::cin >> T;
    if (!(T >= 1) && !(T <= 25))
    {
        return 1;
    }
    while (T > 0)
    {
        std::cin >> n;
        int limit = 0;
        while (limit < n)
        {
            int m = n;
            while (m > 0)
            {
                std::cout << "*";
                m--;
            }
            std::cout << "\n";
            limit++;
        }
        T--;
        if (T != 0)
        {
            std::cout << "\n";
        }
    }
}