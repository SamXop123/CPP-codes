
/*
Develop a program to sort a file consisting of books‟ details in the alphabetical order
of author names. The details of books include
a. book_id,
b. author_name,
c. price, no_of_pages,
d. publisher,
e. year_of_publishing.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Book {
    int book_id;
    string author_name;
    float price;
    int no_of_pages;
    string publisher;
    int year_of_publishing;
};

// Comparator function to sort books by author name
bool compareByAuthor(const Book &b1, const Book &b2) {
    return b1.author_name < b2.author_name;
}

int main() {
    ifstream inputFile("data.txt");
    if (!inputFile) {
        cerr << "Could not open the file!" << endl;
        return 1;
    }

    vector<Book> books;
    Book temp;

    // Read book details from the file
    while (inputFile >> temp.book_id) {
        inputFile.ignore();  // To ignore the newline after book_id
        getline(inputFile, temp.author_name);
        inputFile >> temp.price >> temp.no_of_pages;
        inputFile.ignore();  // To ignore the newline after number of pages
        getline(inputFile, temp.publisher);
        inputFile >> temp.year_of_publishing;
        books.push_back(temp);
    }
    inputFile.close();

    // Sort the books by author name
    sort(books.begin(), books.end(), compareByAuthor);

    // Display sorted books
    for (const auto &book : books) {
        cout << "Book ID: " << book.book_id << ", Author: " << book.author_name
             << ", Price: " << book.price << ", Pages: " << book.no_of_pages
             << ", Publisher: " << book.publisher << ", Year: " << book.year_of_publishing << endl;
    }

    return 0;
}
