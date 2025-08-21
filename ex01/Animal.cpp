#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Class Animal constructor Default called\n";
}
Animal::Animal(const std::string type): _type(type)
{
    std::cout << "Class Animal constructor Param called\n";
}
Animal::Animal(const Animal& other)
{
    std::cout << "Class Animal constructor Copy called\n";
    *this = other;
}
Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Class Animal assignment operator called\n";
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}
Animal::~Animal()
{
    std::cout << "Class Animal destructor called\n";
}

/*getter*/
std::string Animal::getType() const
{
    return (this->_type);
}

/*membre fonction*/
void    Animal::makeSound() const
{
    std::cout << "Animal makes different sounds\n";
}