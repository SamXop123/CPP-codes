// Random Number Generator from 0 to 100

#include <iostream>
using namespace std;

int main() {

  srand(time(NULL));

  int num = (rand() % 100) + 1;

  cout << num << endl;
  
  return 0;
}

// =========================================

// Another application:

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));  // Seed the random number generator
    int randNum = rand() % 5 + 1;  // Generates a random number between 1 and 5

    switch(randNum)
    {
        case 1:
            std::cout << "You win a bumper prize!\n";
            break;
        case 2:
            std::cout << "You win a t-shirt!\n";
            break;
        case 3:
            std::cout << "You win a free lunch!\n";
            break;
        case 4:
            std::cout << "You win a gift card!\n";
            break;
        case 5:
            std::cout << "You win concert tickets!\n";
            break;
    }

    return 0;
}

