#pragma once
#include "AbstructAnimal.hpp"

class Dog : public AbstructAnimal {
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
