#include <iostream>
using namespace std;

struct Student {
    int age;          // public by default
    string name;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Saharsh";
    s1.age = 30;

    s1.display();
    return 0;
}


// #include <iostream>
// using namespace std;

// class Student {
// private:
//     int age;          // private by default
//     string name;

// public:
//     void setData(string n, int a) {
//         name = n;
//         age = a;
//     }

//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student s1;
//     s1.setData("Saharsh", 20);

//     s1.display();
//     return 0;
// }
