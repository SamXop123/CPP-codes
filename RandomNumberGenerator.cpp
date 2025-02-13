// Random Number Generator from 0 to 100

#include <iostream>
using namespace std;

int main() {

  srand(time(NULL));

  int num = (rand() % 100) + 1;

  cout << num << endl;
  
  return 0;
}
