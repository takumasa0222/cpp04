#include "Animal.hpp"
#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

void runDeepCopyTest() {
    Dog dog1;
    size_t i = 0;
    dog1.setIdea(i, "idea1");
    std::cout << "dog1 idea[0]: " << dog1.getIdea(i) << std::endl;
    Dog dog2;
    dog2 = dog1;
    std::cout << "\n=== Before setting value ===" << std::endl;
    std::cout << "dog1 idea[0]: " << dog1.getIdea(i) << std::endl;
    std::cout << "dog2 idea[0]: " << dog2.getIdea(i) << std::endl;
    std::cout << "\n=== After setting value ===" << std::endl;
    dog2.setIdea(i, "DOG2_IDEA");
    std::cout << "dog1 idea[0]: " << dog1.getIdea(i) << std::endl;
    std::cout << "dog2 idea[0]: " << dog2.getIdea(i) << std::endl;
}

int main() {
    std::cout << "\n=== Animal Test ===" << std::endl;
    const Animal* animals[10];
    for (int i = 0;  i < 10; i++) {
        if (i < 5)
            animals[i] = new Dog();
        else 
            animals[i] = new Cat();
    }
    std::cout << "\n=== Deepcopy Test ===" << std::endl;
    runDeepCopyTest();
    std::cout << "\n=== Destructor ===" << std::endl;
    for (int i = 0;  i < 10; i++) {
        delete animals[i];
    }
}
