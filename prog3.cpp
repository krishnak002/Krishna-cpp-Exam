#include <iostream>
using namespace std;

class Animal 
{
private:
    string name;
    string sound;

public:
    void setDetails(string n, string s)
    {
        name = n;
        sound = s;
    }

    void makeSound()
    {
        cout << name << " makes sound: " << sound << endl;
    }
};

class Dog : public Animal
{
public:
    void soundOfDog()
    {
        setDetails("Dog", "Bhav.. Bhav...");
    }
};

class Cat : public Animal
{
public:
    void soundOfCat()
    {
        setDetails("Cat", "Meow... Meow...");
    }
};

int main()
{
    Dog d;
    Cat c;

    cout << "--- Animal Sounds ---" << endl;

    d.soundOfDog();
    d.makeSound();

    c.soundOfCat();
    c.makeSound();

    return 0;
}
