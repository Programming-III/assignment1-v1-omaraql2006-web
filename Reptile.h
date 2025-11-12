#ifndef REPTILE_H
#define REPTILE_H
#include <string>
#include "Animal.h"
using namespace std;

class Reptile : public Animal {
public:
    bool isVenomous;
    Reptile (string n, int a, bool venom);
    Reptile ();
    ~Reptile ();
};
#endif
