#include <iostream>

int main(){
  int T;
  int a,b,c;
  std::cin >> T;
  while (T) {
    std::cin >> a >> b >> c;
    if (a < b && b < c){
      std::cout << "STAIR" <<std::endl;
    } else if (a < b && b > c){
      std::cout << "PEAK" <<std::endl;
    } else {
      std::cout << "NONE" << std::endl;
    }
    T--;
  }
}
