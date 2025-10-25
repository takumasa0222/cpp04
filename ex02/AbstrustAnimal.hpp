#include <string>
#include "Brain.hpp"

class AbstrustAnimal {
public:
    AbstrustAnimal();
    virtual ~AbstrustAnimal();
    AbstrustAnimal(const AbstrustAnimal& source);
    AbstrustAnimal& operator=(const AbstrustAnimal& source);
    virtual void makeSound() const = 0;
    std::string getType() const;
protected:
    std::string type;
};

class Dog : public AbstrustAnimal {
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

class Cat : public AbstrustAnimal {
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
