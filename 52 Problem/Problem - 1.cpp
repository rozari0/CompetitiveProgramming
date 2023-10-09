#include <iostream>

int main()
{
    int T, n;
    std::cin >> T;
    while (T > 0)
    {
        std::cin >> n;
        if (n % 2 == 0)
        {
            std::cout << "even" << std::endl;
        }
        else
        {
            std::cout << "odd" << std::endl;
        }
        T--;
    }
}