#include <iostream>
using namespace std;

class Math {
public:
    inline int square(int x) {  
        return x * x;
    }
};

int main() {
    Math obj;
    cout << "Square of 5: " << obj.square(5) << endl;
    cout << "Square of 7: " << obj.square(7) << endl;

    return 0;
}
