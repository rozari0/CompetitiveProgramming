#include <iostream>

int main(){
  int t;
  char inp[3];
  std::cin >> t;
  while (t>0){
    std::cin >> inp[0] >> inp[1] >> inp[2];
    if ((inp[0] == 'Y' || inp[0] == 'y') && (inp[1] == 'E' || inp[1] == 'e') && (inp[2] == 'S' || inp[2] == 's')){
      std::cout << "YES" << std::endl;
    }
    else {
      std::cout << "NO" << std::endl;
    }
    // std::cout << inp << std::endl;
    t--;
  }
}
