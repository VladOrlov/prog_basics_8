#include <iostream>

using namespace std;

struct student_info {
    string first_name;
    string last_name;
    string course;
    string group;
};

struct book_info {
    string title;
    string author;
    double price = 0.0;
};


int main() {

    student_info student;
    student_info *student_pointer;
    student_pointer = &student;

    book_info book;
    book_info *book_pointer;
    book_pointer = &book;

    cout << "Please enter first name" << endl;
    getline(cin, student_pointer->first_name);

    cout << "Please enter last name" << endl;
    getline(cin, student_pointer->last_name);

    cout << "Please enter course" << endl;
    getline(cin, student_pointer->course);

    cout << "Please enter group" << endl;
    getline(cin, student_pointer->group);

    cout << "Book bought by student" << endl;
    cout << "Enter title of book" << endl;
    getline(cin, book_pointer->title);

    cout << "Enter author of book" << endl;
    getline(cin, book_pointer->author);

    string price_text;
    cout << "Enter book price" << endl;
    cin >> price_text;

    double price;
    try {
        price = stod(price_text);
    } catch (int i) {
        cout << "Wrong price number format! Please enter valid parameters - number!\n>";
        return -1;
    }

    book_pointer->price = price;

    cout << "Student " << student_pointer->last_name << " " << student_pointer->first_name
         << " of course " << student_pointer->course << " group " << student_pointer->group
         << " purchased book of " << book_pointer->author << " " << book_pointer->title << " by price - "
         << book_pointer->price << endl;

    return 0;
}