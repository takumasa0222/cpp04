#include "AbstrustAnimal.hpp"
#include <iostream>

Cat::Cat() : brain_(new Brain()){
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat& source) : AbstrustAnimal(source) {
    std::cout << "Cat Copy constructor called" << std::endl;
    if (this == &source)
        return ;
    delete brain_;
    brain_ = new Brain(*source.brain_);
}

Cat& Cat::operator=(const Cat& source) {
    std::cout << "Cat Copy assign operator called" << std::endl;
    if (this == &source)
        return *this;
    AbstrustAnimal::operator=(source);
    delete brain_;
    brain_ = new Brain(*source.brain_);
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Nyao Nyao" << std::endl;
}

const std::string& Cat::getIdea(unsigned int index) const {
    if (index >= Brain::kIdeaSize)
        throw std::out_of_range("Index out of bounds!!");
    return brain_->getIdea(index);
}

void Cat::setIdea(unsigned int index, const std::string &idea) {
    if (index >= Brain::kIdeaSize) {
        std::cout << "Index out of bounds!!" << std::endl;
        return;
    }
   brain_->setIdea(index, idea);
}