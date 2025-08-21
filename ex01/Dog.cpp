#include "Animal.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Class Dog constructor Default called\n";
    this->_type = "Dog";
    this->_brain = new Brain();
}
Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Class Dog constructor Copy called\n";
    _brain = new Brain(*other._brain);
}
Dog&    Dog::operator=(const Dog& other)
{
    std::cout << "Class Dog assignment operator called\n";
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
    std::cout << "Class Dog destructor called\n";
    delete _brain;
}

/*membre fonction*/
void    Dog::makeSound() const
{
    std::cout << "Dog makes a sound Woof Woof 🐶\n";
}

Brain*  Dog::getbrain() const
{
    return (this->_brain);
}
