#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
    string name;
public:
    Pet(const string& petName) : name(petName) {}
    virtual ~Pet() {
        cout << "Pet deleted: " << name << endl;
    }
    virtual void printCharacteristics() const = 0;
};

class Dog : public Pet {
public:
    Dog(const string& name) : Pet(name) {}
    void printCharacteristics() const override {
        cout << "Dog's name: " << name << endl;
    }
};

class Cat : public Pet {
public:
    Cat(const string& name) : Pet(name) {}
    void printCharacteristics() const override {
        cout << "Cat's name: " << name << endl;
    }
};

class Parrot : public Pet {
public:
    Parrot(const string& name) : Pet(name) {}
    void printCharacteristics() const override {
        cout << "Parrot's name: " << name << endl;
    }
};

int main() {
    Pet* myDog = new Dog("Rex");
    Pet* myCat = new Cat("Whiskers");
    Pet* myParrot = new Parrot("Polly");
    myDog->printCharacteristics();
    myCat->printCharacteristics();
    myParrot->printCharacteristics();
    delete myDog;
    delete myCat;
    delete myParrot;
}