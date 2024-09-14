// -> Empty Class


// #include<iostream>
// // #include"Hero.cpp"

// using namespace std;

// class Hero {

//             //     // properties
//             // char name[100];
//             // int health;
//             // char level;
//             // int health;

// };



// int main() {
// // creating of Object
// Hero h1;

// cout << "size : " << sizeof(h1) << endl; 
//     return 0;
// }










// -> Access Modifiers

// .(dot operator se access kar sakte hai)


// #include<iostream>
// using namespace std;

// class Hero {


//     // properties / data members
//     public:
//     int health;
//     // private:
//     char level;

//     void print() {
//         cout << level << endl;
//     }


// };



// int main() {
// Hero ramesh;

// // ramesh.health = 70;
// // ramesh.level = 'A';

// cout << "health is:" << ramesh.health << endl;
// cout << "level is:" << ramesh.level << endl;

// return 0;

// };










// -> Gettter && Setters


// #include<iostream>
// using namespace std;

// class Hero {

//     // properties / data members
//     private:

//     int health;

//     public:
//     char level;


//      void print() {
//         cout << level << endl;
//     }

//     int getHealth() {
//         return health;
//     }

//     char getLevel() {
//         return level;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

//     // void setHealth(int h, char pwd) {
//     //         if(pwd == "A") {
//     //             health = h;
//     //         }
//     //     }


//    void setLevel(char ch) {
//     level = ch;
//    }

// };



// int main() {
//     // creating object
// Hero ramesh;
// cout << "Ramesh health is" << ramesh.getHealth() << endl;
// // use setter
// ramesh.setHealth(70);
// ramesh.level = 'A';

// cout << "health is:" << ramesh.getHealth() << endl;
// cout << "level is:" << ramesh.level << endl;

// return 0;

// };












// -> BTS (Behind The Scene) of Objects 



// #include<iostream>
// using namespace std;

// class Hero {

//     // properties / data members
//     private:

//     int health;

//     public:
//     char level;


//      void print() {
//         cout << level << endl;
//     }

//     int getHealth() {
//         return health;
//     }

//     char getLevel() {
//         return level;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

//     // void setHealth(int h, char pwd) {
//     //         if(pwd == "A") {
//     //             health = h;
//     //         }
//     //     }


//    void setLevel(char ch) {
//     level = ch;
//    }

// };



// int main() {
//     // creating object
// Hero ramesh;
// cout << "size of ramesh " << sizeof(ramesh) << endl;
// // cout << "Ramesh health is" << ramesh.getHealth() << endl;
// // use setter
// ramesh.setHealth(70);
// ramesh.level = 'A';

// cout << "health is:" << ramesh.getHealth() << endl;
// cout << "level is:" << ramesh.level << endl;

// return 0;

// };


// HomeWork
// -> 1) padding , greding alignment 






// -> stactic vs Dynamic Allocation

// #include<iostream>
// using namespace std;

// class Hero {

//     // properties / data members
//     private:

//     int health;

//     public:
//     char level;


//      void print() {
//         cout << level << endl;
//     }

//     int getHealth() {
//         return health;
//     }

//     char getLevel() {
//         return level;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

//     // void setHealth(int h, char pwd) {
//     //         if(pwd == "A") {
//     //             health = h;
//     //         }
//     //     }


//    void setLevel(char ch) {
//     level = ch;
//    }

// };



// int main() {


//     // static allocation
//     Hero a;
//     a.setHealth(80);
//     a.setLevel('B');
//     cout << "level is " << a.level << endl;
//     cout << "health is " << a.getHealth() << endl;


// // dynamically
//     Hero *b = new Hero;
//     b->setLevel('A');
//     b->setHealth(70);
//     cout << "level is " << (*b).level << endl;
//     cout << "health is " << (*b).getHealth() << endl;

//     cout << "level is " << b->level << endl;
//     cout << "health is " << b->getHealth() << endl;

//     // creating object
// // Hero ramesh;
// // cout << "size of ramesh " << sizeof(ramesh) << endl;
// // // cout << "Ramesh health is" << ramesh.getHealth() << endl;
// // // use setter
// // ramesh.setHealth(70);
// // ramesh.level = 'A';

// // cout << "health is:" << ramesh.getHealth() << endl;
// // cout << "level is:" << ramesh.level << endl;

// return 0;

// };










// // -> Constructor

// #include<iostream>
// using namespace std;

// class Hero {

//     // properties / data members
//     private:

//     int health;

//     public:
//     char level;


//      void print() {
//         cout << level << endl;
//     }

//     int getHealth() {
//         return health;
//     }

//     char getLevel() {
//         return level;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

//     // void setHealth(int h, char pwd) {
//     //         if(pwd == "A") {
//     //             health = h;
//     //         }
//     //     }


//    void setLevel(char ch) {
//     level = ch;
//    }

// };



// int main() {

// Hero ramesh;



// //     // static allocation
// //     Hero a;
// //     a.setHealth(80);
// //     a.setLevel('B');
// //     cout << "level is " << a.level << endl;
// //     cout << "health is " << a.getHealth() << endl;


// // // dynamically
// //     Hero *b = new Hero;
// //     b->setLevel('A');
// //     b->setHealth(70);
// //     cout << "level is " << (*b).level << endl;
// //     cout << "health is " << (*b).getHealth() << endl;

// //     cout << "level is " << b->level << endl;
// //     cout << "health is " << b->getHealth() << endl;

//     // creating object
// // Hero ramesh;
// // cout << "size of ramesh " << sizeof(ramesh) << endl;
// // // cout << "Ramesh health is" << ramesh.getHealth() << endl;
// // // use setter
// // ramesh.setHealth(70);
// // ramesh.level = 'A';

// // cout << "health is:" << ramesh.getHealth() << endl;
// // cout << "level is:" << ramesh.level << endl;

// return 0;

// };












// // -> Default Constructor

// #include<iostream>
// using namespace std;

// class Hero {

//     // properties / data members
//     private:

//     int health;

//     public:
//     char level;


//     Hero() {
//         cout << "Constructor called" << endl;
//     }


//      void print() {
//         cout << level << endl;
//     }

//     int getHealth() {
//         return health;
//     }

//     char getLevel() {
//         return level;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

//     // void setHealth(int h, char pwd) {
//     //         if(pwd == "A") {
//     //             health = h;
//     //         }
//     //     }


//    void setLevel(char ch) {
//     level = ch;
//    }

// };



// int main() {


// // object created statically
// // cout << "Hi" << endl;

// Hero ramesh;
// // cout << "hello" << endl;

// // dynamically
// Hero *h = new Hero();


// return 0;

// };










// -> Parameterised Constructor

// #include<iostream>
// using namespace std;

// class Hero {

//     // properties / data members
//     private:

//     int health;

//     public:
//     char level;


//     Hero() {
//         cout << "Constructor called" << endl;
//     }

//     // Parameterised Constructor
//     Hero(int health) {
//         health = health;
//     }

//      void print() {
//         cout << level << endl;
//     }

//     int getHealth() {
//         return health;
//     }

//     char getLevel() {
//         return level;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

 

//    void setLevel(char ch) {
//     level = ch;
//    }

// };



// int main() {


// // object created statically


// Hero ramesh(10);

// cout << "Address of ramesh" << &ramesh << endl;
// ramesh.getHealth();

// // dynamically
// Hero *h = new Hero();


// return 0;

// };










// // -> This keyword

// #include<iostream>
// using namespace std;

// class Hero {

//     // properties / data members
//     private:

//     int health;

//     public:
//     char level;


//     // Hero() {
//     //     cout << "Constructor called" << endl;
//     // }

//     // Parameterised Constructor
//     Hero(int health) {
//         // cout << "this -> " << this << endl;
//         this -> health = health;
//     }

//     Hero(int health, char level) {
//         // cout << "this -> " << this << endl;
//         this -> level = level;
//         this -> health = health;
//     }

//      void print() {
//         cout << level << endl;
//     }

//     int getHealth() {
//         return health;
//     }

//     char getLevel() {
//         return level;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

 

//    void setLevel(char ch) {
//     level = ch;
//    }

// };



// int main() {

// // Hero tt;
// // object created statically


// Hero ramesh(10);

// // cout << "Address of ramesh" << &ramesh << endl;
// // ramesh.getHealth();
// ramesh.print();
// // dynamically
// Hero *h = new Hero(11);
// h->print();

// Hero temp(22, 'B');
// temp.print();

// return 0;

// };












// #include<iostream>
// using namespace std;

// class Hero {
    
//     //properties
//     private:
//     int health;

//     public:
//     char *name;
//     char level;
//     static int timeToComplete;

//     Hero() {
//         cout << "Simple constructor called" << endl;
//         name = new char[100];
//     }

//     //Paramerterised Constructor
//     Hero(int health) {
//         this -> health = health;
//     }

//     Hero(int health, char level) {
//         this -> level = level;
//         this -> health = health;
//     }

//     //copy constructor
//     Hero(Hero& temp) {

//         char *ch = new char[strlen(temp.name) + 1];
//         strcpy(ch, temp.name);
//         this->name = ch;

//         cout << "Copy constructor called" << endl;
//         this->health = temp.health;
//         this->level = temp.level;
//     }

//     void print(){
//         cout << endl;
//         cout << "[ Name: " << this->name<< " ,";
//         cout << "health: " << this->health << " ,";
//         cout <<"level: " << this->level << " ]";
//         cout << endl << endl;
//     }

//     int getHealth() {
//         return health;
//     }

//     char getLevel() {
//         return level;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

//     void setLevel(char ch) {
//         level = ch;
//     }

//     void setName(char name[]) {
//         strcpy(this->name, name);
//     }

//     static int random() {
//         return timeToComplete ;
//     }

//     //Destructor
//     ~Hero() {   
//         cout << "Destructor bhai called" << endl;
//     }

// };

// int Hero::timeToComplete = 5;

// int main() {

//     //cout << Hero::timeToComplete << endl;
//     cout << Hero::random() << endl;

//     // Hero a;

//     // cout << a.timeToComplete << endl;


//     // Hero b;
//     // b.timeToComplete = 10 ;
//     // cout  << a.timeToComplete << endl;
//     // cout << b.timeToComplete << endl;












//     // //Static
//     // Hero a;

//     // //Dynamic
//     // Hero *b = new Hero();
//     // //manually destructor call
//     // delete b;







// //     Hero hero1;

// //     hero1.setHealth(12);
// //     hero1.setLevel('D');
// //     char name[7] = "Babbar";
// //     hero1.setName(name);

// //     //hero1.print();

// //     //use default copy constructor

// //     Hero hero2(hero1);
// //     //hero2.print();
// // //    Hero hero2 = hero1;

// //     hero1.name[0] = 'G';
// //     hero1.print();

// //     hero2.print();

// //     hero1 = hero2;

// //     hero1.print();

// //     hero2.print();


    













//     // //Hero tt;

//     // //object created statically
//     // Hero ramesh(10);
//     // //cout << "Address of ramesh " << &ramesh << endl;
//     // ramesh.print();

//     // //dynamically
//     // Hero *h =  new Hero(11);
//     // h->print();

//     // Hero temp(22, 'B');
//     // temp.print();














//     /*
//     //static allocation
//     Hero a;
//     a.setHealth(80);
//     a.setLevel('B');
//     cout << "level is  " << a.level << endl;
//     cout << " health is " << a.getHealth() << endl;

//     //dynamicallly
//     Hero *b = new Hero;
//     b->setLevel('A');
//     b->setHealth(70);
//     cout << "level is  " << (*b).level << endl;
//     cout << " health is " << (*b).getHealth() << endl;


//     cout << "level is  " << b->level << endl;
//     cout << " health is " << b->getHealth() << endl;
//     */
    


//     // //creation of Object
//     // Hero ramesh;   
//     // cout << "Size of Ramesh is " << sizeof(ramesh) << endl;

//     // cout << "Ramesh health is " << ramesh.getHealth() << endl;
//     // //use setter
//     // ramesh.setHealth(70);
//     // ramesh.level = 'A';


//     // cout << "health is: " << ramesh.getHealth() << endl; 
//     // cout << "Level is: " << ramesh.level << endl; 

//     // //cout << "size : " << sizeof(h1) << endl;


//     return 0;
// }