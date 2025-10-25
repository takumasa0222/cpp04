#pragma once
#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    ~Dog();
    Dog(const Dog& source);
    Dog& operator=(const Dog& source);
    virtual void makeSound() const;
    void setIdea(unsigned int index, const std::string &idea);
    const std::string &getIdea(unsigned int index) const;
private:
    Brain* brain_;
};