#include <iostream>
#include <string>

int get_first_digit(int x)
{
    while (x >= 10)
    {
        x = x / 10;
    }
    return x;
}

int main()
{
    int T;
    std::cin >> T;
    while (T > 0)
    {
        std::string num;
        std::cin >> num;

        std::cout << "Sum = " << std::stoi(num) % 10 + get_first_digit(std::stoi(num)) << std::endl;
        T--;
    }
}