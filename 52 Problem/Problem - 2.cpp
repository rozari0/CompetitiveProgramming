#include <iostream>
#include <string>

int main()
{
    int T;
    std::cin >> T;
    std::string n;

    while (T > 0)
    {
        std::cin >> n;
        if (n[n.length() - 1] % 2 == 0)
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