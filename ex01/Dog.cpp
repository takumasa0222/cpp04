#include "Animal.hpp"
#include <iostream>

Dog::Dog() : brain_(new Brain()) {
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& source) : Animal(source) {
    std::cout << "Dog Copy constructor called" << std::endl;
    if (this == &source)
        return ;
    delete brain_;
    brain_ = new Brain(*source.brain_);
}

Dog& Dog::operator=(const Dog& source) {
    std::cout << "Dog Copy assign operator called" << std::endl;
    if (this == &source)
        return *this;
    Animal::operator=(source);
    delete brain_;
    brain_ = new Brain(*source.brain_);
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Wan Wan" << std::endl;
}

const std::string& Dog::getIdea(unsigned int index) const {
    if (index >= Brain::kIdeaSize)
        throw std::out_of_range("Index out of bounds!!");
    return brain_->getIdea(index);
}

void Dog::setIdea(unsigned int index, const std::string &idea) {
    if (index >= Brain::kIdeaSize) {
        std::cout << "Index out of bounds!!" << std::endl;
        return;
    }
   brain_->setIdea(index, idea);
}