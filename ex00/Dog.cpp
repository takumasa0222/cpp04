#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& source) : Animal(source) {
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& source) {
    std::cout << "Dog Copy assign operator called" << std::endl;
    if (this == &source)
        return *this;
    Animal::operator=(source);
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Wan Wan" << std::endl;
}
