#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    Book(string title, string author, int year) {
        this->title = title;
        this->author = author;
        this->year = year;
    }

    void display_info() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }

    bool is_antique() {
        return year < 2000;
    }
};

int main() {
    Book my_book("Sejarah Dunia Abad Pertengahan", "Susan Wise Baurer", 2016);

    my_book.display_info();
    if (my_book.is_antique()) {
        cout << "Status: Kuno" << endl;
    } else {
        cout << "Status: Tidak Kuno" << endl;
    }

    return 0;
}
