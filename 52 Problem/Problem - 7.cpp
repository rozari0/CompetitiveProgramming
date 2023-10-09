#include <iostream>
#include <cstdlib>
#include <string>

#define MAX_LENGTH 1000;

int main()
{
    int T, count;

    std::cin >> T;
    std::cin.ignore();
    while (T > 0)
    {
        std::string line;
        std::getline(std::cin, line);
        if (line.length() > 0)
        {
            count = 1;
        }
        else
        {
            count = 0;
        }
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ')
            {
                count++;
            }
        }
        std::cout << count << std::endl;
        T--;
    }

    return 0;
}