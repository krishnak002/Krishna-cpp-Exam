#include <iostream>
using namespace std;

class Animal {
public:
    virtual void displayDetails(){
        cout << "This is an animal." << endl;
    }
};

class Dog : public Animal {
public:
    void displayDetails(){
        cout << "Animal: Dog" << endl;
        cout << "Sound: Bhav.. Bhav.." << endl;
    }
};

class Cat : public Animal {
public:
    void displayDetails(){
        cout << "Animal: Cat" << endl;
        cout << "Sound: Meow.. Meow.." << endl;
    }
};

int main() {
    Animal* animals[2];

    animals[0] = new Dog();
    animals[1] = new Cat();

    cout << "----- Animal Details -----" << endl;
    for (int i = 0; i < 2; i++) {
        animals[i]->displayDetails(); 
        cout << endl;
    }
    return 0;
}
