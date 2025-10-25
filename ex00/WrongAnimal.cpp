#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() :type("WrongAnimal") {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& source) {
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    if (this == &source)
        return;
    this->type = source.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& source) {
    std::cout << "WrongAnimal Copy assign operator called" << std::endl;
    if (this == &source)
        return *this;
    this->type = source.type;
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal sound...!!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}