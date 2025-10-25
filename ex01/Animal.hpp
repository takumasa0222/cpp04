#include <string>
#include "Brain.hpp"

class Animal {
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& source);
    Animal& operator=(const Animal& source);
    virtual void makeSound() const;
    std::string getType() const;
protected:
    std::string type;
};

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

class Cat : public Animal {
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
