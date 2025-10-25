#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& source) : WrongAnimal(source) {
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& source) {
    std::cout << "WrongCat Copy assign operator called" << std::endl;
    if (this == &source)
        return *this;
    WrongAnimal::operator=(source);
    return *this;
}

void WrongCat::makeSound() const{
    std::cout << "Nyao Nyao" << std::endl;
}
