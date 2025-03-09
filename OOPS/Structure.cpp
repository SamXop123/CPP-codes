#include <iostream>
using namespace std;

// Structure for Book
struct Book {
    string title;
    string author;
    float price;
};

// Function to display book details
void displayBooks(Book books[], int n) {
    cout << "\n📖 List of Books:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << " Details:";
        cout << "\nTitle: " << books[i].title;
        cout << "\nAuthor: " << books[i].author;
        cout << "\nPrice: ₹" << books[i].price << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore(); // To avoid getline issue after cin

    Book books[n]; // Array of structures

    // Taking input for multiple books
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Book " << i + 1 << ":\n";
        cout << "Title: ";
        getline(cin, books[i].title);

        cout << "Author: ";
        getline(cin, books[i].author);

        cout << "Price: ";
        cin >> books[i].price;
        cin.ignore(); // To avoid issues with next getline
    }

    // Display all books
    displayBooks(books, n);

    return 0;
}
