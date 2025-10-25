#include "Animal.hpp"
#include <iostream>

Cat::Cat() {
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat& source) : Animal(source) {
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& source) {
    std::cout << "Cat Copy assign operator called" << std::endl;
    if (this == &source)
        return *this;
    Animal::operator=(source);
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Nyao Nyao" << std::endl;
}
