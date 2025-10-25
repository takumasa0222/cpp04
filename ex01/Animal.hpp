#pragma once
#include <string>
#include "Brain.hpp"

class Animal {
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& source);
    Animal& operator=(const Animal& source);
    virtual void makeSound() const;
    std::string getType() const;
protected:
    std::string type;
};


