#include "Amateria.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "Ice: Default constructor called\n";
}
Ice::Ice(std::string const& type): AMateria("ice")
{
    std::cout << "Ice: Param constructor called\n";
}
Ice::Ice(const Ice& other): AMateria(other)
{
    std::cout << "Ice: Copy constructor called\n";
}
Ice&    Ice::operator=(const Ice& other)
{
    std::cout << "Ice: assignment operator called\n";
    if (this != &other)
        AMateria::operator=(other);
    return (*this);
}
Ice::~Ice()
{
    std::cout << "Ice: destructor called\n";
}

/*membre fonction*/
AMateria*   Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}