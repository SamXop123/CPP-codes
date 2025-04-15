/*
Design a class template by name Vector and perform the following:
a. Find the smallest of the element in the Vector.
b. Search for an element in the Vector.
c. Find the average of the element in the array.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

template <typename T>
class Vector {
private:
    vector<T> elements;

public:
    // Constructor to initialize the vector
    Vector(const vector<T>& elems) : elements(elems) {}

    // Find the smallest element
    T findSmallest() {
        return *min_element(elements.begin(), elements.end());
    }

    // Search for an element in the vector
    bool searchElement(T value) {
        return find(elements.begin(), elements.end(), value) != elements.end();
    }

    // Find the average of elements
    double findAverage() {
        return accumulate(elements.begin(), elements.end(), 0.0) / elements.size();
    }
};

int main() {
    // Example with integers
    Vector<int> intVector({10, 20, 30, 40, 50});
    cout << "Smallest: " << intVector.findSmallest() << endl;
    cout << "Found 30? " << (intVector.searchElement(30) ? "Yes" : "No") << endl;
    cout << "Average: " << intVector.findAverage() << endl;

    // Example with doubles
    Vector<double> doubleVector({10.5, 20.2, 30.8, 40.1});
    cout << "Smallest: " << doubleVector.findSmallest() << endl;
    cout << "Found 30.8? " << (doubleVector.searchElement(30.8) ? "Yes" : "No") << endl;
    cout << "Average: " << doubleVector.findAverage() << endl;

    return 0;
}
