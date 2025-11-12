#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
#include "Enclosure.h"
#include "Visitor.h"

class Animal {
private:
    string name;
    int age;
    bool isHungry;
public:
    Animal(string n, int a) : name(n), age(a), isHungry(true) {}
    void display() {
        cout << "Animal Name: " << name << endl;
        cout << "Animal Age: " << age << endl;
    }
    void feed() {
        if (isHungry) {
            cout << name << " has been fed." << endl;
            isHungry = false;
        } else {
            cout << name << " is not hungry." << endl;
        }
    }
    virtual ~Animal() = default;
};

class Mammal : public Animal {
public:
    string furColor;
    Mammal(string n, int a, string fur) : Animal(n, a), furColor(fur) {}
    ~Mammal() override = default;
};

class Bird : public Animal {
public:
    double wingSpan;
    Bird(string n, int a, double wing) : Animal(n, a), wingSpan(wing) {}
    ~Bird() override = default;
};

class Reptile : public Animal {
public:
    bool isVenomous;
    Reptile(string n, int a, bool venom) : Animal(n, a), isVenomous(venom) {}
    ~Reptile() override = default;
};

class Enclosure {
private:
    int capacity;
    int currentCount;
public:
    Enclosure(int cap, int curr) : capacity(cap), currentCount(curr) {}
    Enclosure() : capacity(0), currentCount(0) {}
    ~Enclosure() = default;
    void addAnimal(Animal* a) {
        (void)a; // placeholder
    }
    void DisplayAnimals() {
        // placeholder
    }
};

class Visitor {
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor(string name, int tickets) : visitorName(name), ticketsBought(tickets) {}
    Visitor() : visitorName(""), ticketsBought(0) {}
    ~Visitor() = default;
    void displayInfo() {
        cout << "Visitor Name: " << visitorName << endl;
        cout << "Tickets Bought: " << ticketsBought << endl;
    }
};

int main() {
    Mammal m("Lion", 5, "Hungry");
    m.display();
    m.feed();
    Mammal m2("parrot", 2, "notHungry");
    m2.display();
    m2.feed();
    Mammal m3("Snake", 3, "Venomous");
    m3.display();
    Visitor v("Sarah Ali", 3);
    v.displayInfo();

    return 0;
}
