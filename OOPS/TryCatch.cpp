#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        int numerator = 10;
        int denominator = 0;
        int res;
        if (denominator == 0) //check if denominator is 0, throw exception
        {
            throw runtime_error ("Division by zero not allowed!");
        }
        res = numerator/denominator;
        cout << "Result after division: " << res << endl;
    }
    catch (const exception& e) //catch block to catch the thrown exception
    {
        cout << "Exception " << e.what() << endl;
    }
    return 0;
}v
