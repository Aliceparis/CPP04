#include "Animal.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Cat: constructor Default called\n";
    this->_type = "Cat";
    this->_brain = new Brain();
}
Cat::Cat(const Cat& other)
{
    std::cout << "Cat: constructor copy called\n";
    this->_brain = new Brain(*other._brain);
}
Cat&    Cat::operator=(const Cat& other)
{
    std::cout << "Cat: assignment operator called\n";
    if (this != &other)
        _brain = new Brain(*other._brain);
    return (*this);
}
Cat::~Cat()
{
    std::cout << "Cat: destructor called\n";
    delete _brain;
}

/*membre fonction*/
void    Cat::makeSound() const
{
    std::cout << "Cat make sounds like meow meow 🐱\n";
}

/*getter*/
Brain*  Cat::getbrain() const
{
    return (this->_brain);
}