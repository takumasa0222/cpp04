#pragma once
#include <string>
#include "Brain.hpp"

class AbstructAnimal {
public:
    AbstructAnimal();
    virtual ~AbstructAnimal();
    AbstructAnimal(const AbstructAnimal& source);
    AbstructAnimal& operator=(const AbstructAnimal& source);
    virtual void makeSound() const = 0;
    std::string getType() const;
protected:
    std::string type;
};

