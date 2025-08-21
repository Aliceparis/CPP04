#include "Animal.hpp"
#include "Brain.hpp"


int main(void)
{
    Animal* P = new Dog();

    std::cout << P->getType() << std::endl;
    P->makeSound();
    delete P;

    Animal* q = new Cat();
    std::cout << q->getType() << std::endl;
    q->makeSound();
    delete q;

    return (0);
}