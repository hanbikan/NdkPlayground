#include "animal.h"
#include <iostream>
#include <string>

Animal::Animal(const std::string& name) : name(name) {}

std::string Animal::getName() {
    return name;
}