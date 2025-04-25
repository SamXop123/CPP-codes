// Write a program to implement array.

#include <iostream>
using namespace std;

int main() {
  int numbers[5];
  
  cout << "Enter the numbers:" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> numbers[i];
  }
  
  cout << "Here's what you entered:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "Number at index " << i << "=" << numbers[i] << endl;
  }
  
  return 0;
}
