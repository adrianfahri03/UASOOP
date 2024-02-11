#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double score;

public:
    Student(string name, int age, double score) {
        this->name = name;
        this->age = age;
        this->score = score;
    }

    void display_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Score: " << score << endl;
    }
};

int main() {
    Student my_student("Adrian Nashif Fahri", 20,90.0);

    my_student.display_info();

    return 0;
}
