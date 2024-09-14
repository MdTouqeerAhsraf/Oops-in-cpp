
// #include<iostream>
// using namespace std;

// class A {

//     public:
//     void sayHello() {
//         cout << "Hello Touqeer Ashraf" << endl;
//     }

//     int sayHello(string name, int n) {
//         cout << "Hello Touqeer " << name << endl;
//         return n;
//     }
    
//     void sayHello(string name) {
//         cout << "Hello Touqeer " << name << endl;
//     }
// };


// int main() {

//     A obj;
//     obj.sayHello();

//     return 0;
// };





















// overloading


// #include<iostream>
// using namespace std;

// class A {

//     public:
//     int a;
//     int b;

//     public:
//     int add() {
//         return a+b;
//     }

//     void operator+ (A &obj) {
//         int value1 = this -> a;
//         int value2 = obj.a;
//         cout << "output" << value2 - value1 << endl;
//         // cout << "Hello touqeer" << endl;
//     }
//     void operator() () {
//         cout << "main Bracket hu" << this->a << endl;
//     }

// };


// int main() {

//   A obj1, obj2;

//   obj1.a = 4;
//   obj2.a = 7;

//   obj1 + obj2;
// obj1();
//     return 0;
// };





















// -> Run Time Polymorphism

#include<iostream>
using namespace std;

class Animal {
    public:
    void speak() {
        cout << "Speaking" << endl;
    }
 
};

class Dog: public Animal {
    public:
    void speak() {
        cout << "Barking" << endl;
    }
 
};
int main() {

    Dog obj;
    obj.speak();
    return 0;
};