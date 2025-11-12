#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "Animal.h"
class Animal;

class Enclosure {
    private:
        int capacity;
        int currentCount;
    public:
        Enclosure(int cap, int curr);
        Enclosure();
        ~Enclosure();
        void addAnimal(Animal* a);
        void DisplayAnimals();
};
#endif
