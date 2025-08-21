#include "Animal.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Dog: constructor Default called\n";
    this->_type = "Dog";
    this->_brain = new Brain();
}
Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Dog: constructor Copy called\n";
    this->_brain = new Brain(*other._brain);
}
Dog&    Dog::operator=(const Dog& other)
{
    std::cout << "Dog: assignment operator called\n";
    if (this != &other)
    {
        delete _brain;
        Animal::operator=(other);
        _brain = new Brain(*other._brain);
    }
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Dog: destructor called\n";
    delete _brain;
}

/*membre fonction*/
void    Dog::makeSound() const
{
    std::cout << "Dog makes a sound Woof Woof 🐶\n";
}

/*getter*/
Brain*  Dog::getbrain() const
{
    return (this->_brain);
}
