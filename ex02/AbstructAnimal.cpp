#include "AbstructAnimal.hpp"
#include <iostream>

AbstructAnimal::AbstructAnimal() :type("AbstructAnimal") {
    std::cout << "AbstructAnimal constructor called" << std::endl;
}

AbstructAnimal::~AbstructAnimal() {
    std::cout << "AbstructAnimal Destructor called" << std::endl;
}

AbstructAnimal::AbstructAnimal(const AbstructAnimal& source) {
    std::cout << "AbstructAnimal Copy constructor called" << std::endl;
    if (this == &source)
        return;
    this->type = source.type;
}

AbstructAnimal& AbstructAnimal::operator=(const AbstructAnimal& source) {
    std::cout << "AbstructAnimal Copy assign operator called" << std::endl;
    if (this == &source)
        return *this;
    this->type = source.type;
    return *this;
}

// void AbstructAnimal::makeSound() const{
//     std::cout << "AbstructAnimal sound...!!" << std::endl;
// }

std::string AbstructAnimal::getType() const {
    return type;
}