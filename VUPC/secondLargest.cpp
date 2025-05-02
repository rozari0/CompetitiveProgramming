#include <climits>
#include <iostream>
using namespace std;

int secondLargest(int array[], int size) {
  int max = INT_MIN;
  int secondMax = max;

  for (int i = 0; i < size; i++) {
    if (array[i] > max) {
      secondMax = max;
      max = array[i];
    } else if (array[i] > secondMax && array[i] < max) {
      secondMax = array[i];
    }
  }

  return secondMax;

  return 0;
}

int main() {
  int array[] = {1, 2, 3, 8, 4, 5, 6, 7, 8, 8};
  int size = sizeof(array) / sizeof(array[0]);

  cout << secondLargest(array, size) << endl;
}
