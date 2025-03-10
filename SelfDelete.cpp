#include <iostream>
#include <stdio.h>

int main() {
    std::cout << "This code will be deleted after execution...\n";
    remove(__FILE__);  // Deletes its own source code
    return 0;
}
