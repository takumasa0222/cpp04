#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain& source) {
    std::cout << "Brain Copy constructor called" << std::endl;
    for (size_t i = 0; i < kIdeaSize; i++)
        this->ideas[i] = source.ideas[i];
}

Brain& Brain::operator=(const Brain& source) {
    std::cout << "Brain Copy assign operator called" << std::endl;
    if (this == &source)
        return *this;
    for (size_t i = 0; i < kIdeaSize; i++)
        this->ideas[i] = source.ideas[i];
    return *this;
}

const std::string& Brain::getIdea(unsigned int index) const {
    if (index >= kIdeaSize)
        throw std::out_of_range("Index out of bounds!!");
    return ideas[index];
}

void Brain::setIdea(unsigned int index, const std::string &idea) {
    if (index >= kIdeaSize) {
        std::cout << "Index out of bounds!!" << std::endl;
        return;
    }
    ideas[index] = idea;
}
