#include <iostream>
#include <string>

int main(){
  std::string str,s;
  std::cin >> str;
  for (char c: str){
    if (c != '+'){
      s += c;
    }
    else{
      std::cout << s << std::endl;
    }
  }
  return 0;
}
