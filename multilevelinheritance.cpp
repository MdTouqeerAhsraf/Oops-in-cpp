// -> Multi level inheritance

#include<iostream>
using namespace std;

class Animal {

    public:
    int age;
    int weight;


    public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal {

};

class Germanshepherd: public Dog {

};

int main() {

    Germanshepherd g;
    g.speak();
    cout << g.age << endl;
    return 0;
};