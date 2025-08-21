#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal: constructor Default called\n";
}
Animal::Animal(const std::string type): _type(type)
{
    std::cout << "Animal: constructor Param called\n";
}
Animal::Animal(const Animal& other)
{
    std::cout << "Animal: constructor Copy called\n";
    *this = other;
}
Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal: assignement operator called\n";
    if (this != &other)
        this->_type = other._type;
    return (*this);
}
Animal::~Animal()
{
    std::cout << "Animal: destructor called\n";
}

/*getter*/
std::string Animal::getType() const
{
    return (this->_type);
}

/*membre fonction makeSound need to be completed in the class heritage */