#include <iostream>
#include <cmath>

int main()
{
  unsigned long long a, m, n;
  std::cin >> n >> m >> a;
  unsigned long long ans = std::ceil((double)m / a) * std::ceil((double)n / a);
  std::cout << ans;
  return 0;
}
