#include "Animal.hpp"
#include <iostream>

Animal::Animal() :type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal& source) {
    std::cout << "Animal Copy constructor called" << std::endl;
    if (this == &source)
        return;
    this->type = source.type;
}

Animal& Animal::operator=(const Animal& source) {
    std::cout << "Animal Copy assign operator called" << std::endl;
    if (this == &source)
        return *this;
    this->type = source.type;
    return *this;
}

void Animal::makeSound() const{
    std::cout << "Animal sound...!!" << std::endl;
}

std::string Animal::getType() const {
    return type;
}