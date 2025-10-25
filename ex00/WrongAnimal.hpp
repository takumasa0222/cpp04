#include <string>

class WrongAnimal {
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal& source);
    WrongAnimal& operator=(const WrongAnimal& source);
    void makeSound() const;
    std::string getType() const;
protected:
    std::string type;
};

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat& source);
    WrongCat& operator=(const WrongCat& source);
    virtual void makeSound() const;
};
