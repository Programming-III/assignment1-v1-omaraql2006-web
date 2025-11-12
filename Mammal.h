#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"
#include <string>
using namespace std;

class Mammal : public Animal {
public:
    string furColor;
    Mammal(std::string n, int a, std::string fur);
    Mammal();
    ~Mammal();
};
#endif
