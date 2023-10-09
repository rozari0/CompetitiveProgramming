#include <iostream>
#include <cmath>

int main()
{
    int T;
    std::cin >> T;
    while (T > 0)
    {
        long int num;
        std::cin >> num;
        if (std::sqrt(num) * std::sqrt(num) == num)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
        T--;
    }
    return 0;
}