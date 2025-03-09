#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;

    // Function to input book details
    void getDetails() {
        cout << "Enter Title: ";
        cin.ignore(); // To clear input buffer
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
    }

    void display() {
        cout << "\nTitle: " << title << "\nAuthor: " << author << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book books[n]; // Array of objects

    // Taking input for multiple books
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Book " << i + 1 << ":\n";
        books[i].getDetails();
    }

    // Displaying books
    cout << "\n📖 Book List:\n";
    for (int i = 0; i < n; i++) {
        books[i].display();
    }

    return 0;
}
