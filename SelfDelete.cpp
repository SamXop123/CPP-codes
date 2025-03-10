#include <iostream>
#include <stdio.h>

int main() {
    std::cout << "I will delete myself! 😱\n";
    remove(__FILE__);  // Deletes its own source code
    return 0;
}
