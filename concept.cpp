// // -> Implementation

// #include<iostream>
// using namespace std;

// class Student {


//     private:
//     string name;
//     int age;
//     int heigt;

//     public:
//     int getAge() {
//         return this->age;
//     }
// };

// int main() {
//     Student first;

//     cout << "Sab sahi chalrha hai" << endl;

//     return 0;
// };










// // -> inheritance

// #include<iostream>
// using namespace std;

// class Human {

//     public:
//     int height;
//     int weight;
//     // private:
//     int age;

//     public:
//     int getAge() {
//         return this->age;
//     }
//     void setWeight(int w) {
//         this->weight = w;
//     }
// };

// class Male: public Human {

// public:
// string color;

// void sleep() {
//     cout << "Male is Sleeping" << endl;
// }


// };


// int main() {

//     Male object1;
//         cout << object1.age << endl;
//         cout << object1.weight << endl;
//         cout << object1.height << endl;
       
//         cout << object1.color << endl;
//         object1.setWeight(84);
//         cout << object1.weight << endl;
//         object1.sleep();
//     return 0;
// };








// // -> Access Modifiers and inheritance

// #include<iostream>
// using namespace std;

// class Human {

//     private:
//     // protected:
//     // public:
//     int height;

//     public:
//     int weight;
//     private:
//     int age;

//     public:
//     int getAge() {
//         return this->age;
//     }
//     void setWeight(int w) {
//         this->weight = w;
//     }
// };

// class Male: public Human {
// // class Male: protected Human {
// // class Male: private Human {

// public:
// string color;

// void sleep() {
//     cout << "Male is Sleeping" << endl;
// }

// int getHeight() {
//     return this->height;
// }   

// };


// int main() {

//     Male m1;
//     cout << m1.height << endl;
//     // cout << m1.getHeight() << endl;

//     return 0;
// };













// -> Types of inheritance

// #include<iostream>
// using namespace std;

// class Human {

//     private:
//     // protected:
//     // public:
//     int height;

//     public:
//     int weight;
//     private:
//     int age;

//     public:
//     int getAge() {
//         return this->age;
//     }
//     void setWeight(int w) {
//         this->weight = w;
//     }
// };

// class Male: public Human {
// // class Male: protected Human {
// // class Male: private Human {

// public:
// string color;

// void sleep() {
//     cout << "Male is Sleeping" << endl;
// }

// int getHeight() {
//     return this->height;
// }   

// };


// int main() {

//     Male m1;
//     cout << m1.height << endl;
//     // cout << m1.getHeight() << endl;

//     return 0;
// };