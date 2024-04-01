#include <iostream>

int main(){
  std::string time;
  int T;
  std::cin >> T;
  while (T){
    std::cin >> time;
    if ( (((time[0] - '0') * 10) + (time[1] - '0')) >= 12){
      if ( (((time[0] - '0') * 10) + (time[1] - '0')) > 12){
        std::cout << (((time[0] - '0') * 10) + (time[1] - '0')) - 12 <<":"<<time[3]<<time[4]<<" PM"<<std::endl;
      } else {
        std::cout << (((time[0] - '0') * 10) + (time[1] - '0')) <<":"<<time[3]<<time[4]<<" PM"<<std::endl;
      }


    } else {
      std::cout << time[0] << time[1] <<":"<<time[3]<<time[4]<<" AM"<<std::endl;
    }
    T--;
  }

  return 0;
}
