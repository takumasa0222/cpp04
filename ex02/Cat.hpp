#pragma once
#include "AbstructAnimal.hpp"

class Cat : public AbstructAnimal {
public:
    Cat();
    ~Cat();
    Cat(const Cat& source);
    Cat& operator=(const Cat& source);
    virtual void makeSound() const;
    void setIdea(unsigned int index, const std::string &idea);
    const std::string &getIdea(unsigned int index) const;
private:
    Brain* brain_;
};
