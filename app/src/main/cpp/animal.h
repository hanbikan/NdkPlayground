#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    const std::string name;

public:
    Animal(const std::string& name);
    std::string getName();
};

#endif