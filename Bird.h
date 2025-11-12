#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"
#include <string>
using namespace std;

class Bird : public Animal {
public:
    double wingSpan;
    Bird(string n, int a, double wing);
    Bird();
    ~Bird();
};
#endif
