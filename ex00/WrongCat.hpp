#pragma once
#include <string>
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat& source);
    WrongCat& operator=(const WrongCat& source);
    virtual void makeSound() const;
};
