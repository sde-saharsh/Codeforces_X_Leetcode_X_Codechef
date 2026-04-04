// // #include <iostream>
// // using namespace std;

// // class Student {
// //     int age;         
// //     string name;

// //     void display() {
// //         cout << "Name: " << name << ", Age: " << age << endl;
// //     }
// //     friend void show(Student s);

// //     Student(int age, string name){
// //         this->age = age;
// //         this->name = name;
// //     }

// // public:
// //     static Student createObj(int age,string name){
// //         return Student(age,name);
// //     }
// // };

// // void show(Student s){
// //     s.display();
// //     cout<<s.age << " "<<s.name <<endl;
// // }

// // int main() {

// //     Student s1 = Student::createObj(20,"saharsh");
// //     show(s1);

// //     // Student s1(20,"Saharsh");
// //     // show(s1);
// //     // s1.name = "Saharsh";
// //     // s1.age = 30;

// //     // s1.display();
// //     return 0;
// // }




// #include <iostream>
// using namespace std;

// class A {
//     int x;

// public:
//     A(int val) { x = val; }

//     friend void fun(A);
// };

// class B {
//     int y;

// public:
//     B(int val) { y = val; }

//     friend void fun(B);
// };

// void fun(A a) {
//     cout << a.x << endl;
// }

// int main() {
//     A a(10);
//     fun(a);

//     B b(10);
//     fun(b);
// }


#include <iostream>
using namespace std;

class Test {
    int x;

public:
    Test(int a) { x = a; }

    friend void fun(Test& t);
    void display(){
        cout<<x<<endl;
    }
};

void fun(Test& t) {
    t.x = 50;
}

int main() {
    Test t1(10);
    fun(t1);
    t1.display();
    cout << "Done";
}