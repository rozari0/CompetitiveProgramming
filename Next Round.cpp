#include <iostream>

int main()
{
  int n, k;
  std::cin >> n >> k;
  if (k >= 1 && k <= n && n <= 50)
  {
    std::cout << '0' << std::endl;
    return 1;
  }
  int students[n];
  int limit = 1, advance = 0;
  while (limit <= n)
  {
    std::cin >> students[limit];
    limit++;
  }
  int passmark = students[k];
  limit = 1;
  while (limit <= n)
  {
    if (students[limit] >= passmark)
    {
      advance++;
    }
    limit++;
  }
  if (passmark < 1)
  {
    advance = 0;
  }
  std::cout << advance << std::endl;
  return 0;
}
