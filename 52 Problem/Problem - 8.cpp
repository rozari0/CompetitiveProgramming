#include <iostream>
#include <algorithm>
#include <string>

int main()
{

    int T, case_n = 1;
    std::cin >> T;

    while (T > 0)
    {
        int n[3];
        std::string str = "Case " + std::to_string(case_n) + ":";
        std::cin >>
            n[0] >> n[1] >> n[2];
        std::sort(n, n + (sizeof(n) / sizeof(n[0])));
        for (int i = 0; i < 3; i++)
        {
            str = str + ' ' + std::to_string(n[i]);
        }
        std::cout << str << std::endl;
        T--;
        case_n++;
    }
    return 0;
}