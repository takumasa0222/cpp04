#include "AbstrustAnimal.hpp"
#include <iostream>

AbstrustAnimal::AbstrustAnimal() :type("AbstrustAnimal") {
    std::cout << "AbstrustAnimal constructor called" << std::endl;
}

AbstrustAnimal::~AbstrustAnimal() {
    std::cout << "AbstrustAnimal Destructor called" << std::endl;
}

AbstrustAnimal::AbstrustAnimal(const AbstrustAnimal& source) {
    std::cout << "AbstrustAnimal Copy constructor called" << std::endl;
    if (this == &source)
        return;
    this->type = source.type;
}

AbstrustAnimal& AbstrustAnimal::operator=(const AbstrustAnimal& source) {
    std::cout << "AbstrustAnimal Copy assign operator called" << std::endl;
    if (this == &source)
        return *this;
    this->type = source.type;
    return *this;
}

void AbstrustAnimal::makeSound() const{
    std::cout << "AbstrustAnimal sound...!!" << std::endl;
}

std::string AbstrustAnimal::getType() const {
    return type;
}