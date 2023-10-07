#include <iostream>
#include <string>
#include <cctype>


int main(){
  std::string inputstring;
  std::string result="";
  std::cin >> inputstring;
 
  for (char c : inputstring){
    c = std::tolower(c);
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y'){
      result += ".";
      result += c;
    }
  }
  std::cout << result << std::endl;

}
