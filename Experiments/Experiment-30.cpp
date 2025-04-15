/*
Create a class by name date with the member data day, month and year. Perform the
following:
a. Overload all relational operators <=, >, >=, ==, !=
b. Overload ++ operator to increment a date by one day
c. Overload + to add given number of days to find the next date
d. Provide the necessary function to use the statement like days=dt; where days is
an int variable and dt is an object of date class. The statement is intended to
assign the number of days elapsed in the current year of the date to the variable
days. Note that this is a case of conversion from derived type to basic type.
*/


#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Constructor to initialize the date
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Overloading relational operators
    bool operator==(const Date& other) const {
        return (day == other.day && month == other.month && year == other.year);
    }

    bool operator<(const Date& other) const {
        if (year < other.year) return true;
        if (year == other.year && month < other.month) return true;
        if (year == other.year && month == other.month && day < other.day) return true;
        return false;
    }

    bool operator>(const Date& other) const {
        return !(*this < other || *this == other);
    }

    // Overloading ++ operator to increment the date by one day
    Date& operator++() {
        day++;
        if (day > 30) {  // Simplified: assuming 30 days in each month
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    // Overloading + operator to add a given number of days to the current date
    Date operator+(int n) const {
        Date temp = *this;
        while (n--) {
            ++temp;
        }
        return temp;
    }

    // Conversion to integer (days elapsed in the year)
    operator int() const {
        return (month - 1) * 30 + day;  // Simplified: assuming 30 days per month
    }

    // Display the date
    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date dt(28, 2, 2025);

    cout << "Current date: ";
    dt.display();

    ++dt;  // Increment the date by one day
    cout << "Next day: ";
    dt.display();

    Date newDate = dt + 5;  // Add 5 days to the current date
    cout << "Date after adding 5 days: ";
    newDate.display();

    int days = dt;  // Convert date to number of days in the year
    cout << "Days elapsed in current year: " << days << endl;

    Date dt2(1, 3, 2025);
    cout << "Is the first date > second date? " << (dt > dt2) << endl;

    return 0;
}
