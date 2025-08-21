#include "Amateria.hpp"

AMateria::AMateria(std::string const& type): _type(type)
{
    std::cout << "AMateria: Param constructor called\n";
}
AMateria::AMateria(const AMateria&  other)
{
    std::cout << "AMateria: Copy constructor called\n";
    *this = other;
}
AMateria&   AMateria::operator=(const AMateria& other)
{
    std::cout << "AMateria: assignment operator called\n";
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}
AMateria::~AMateria()
{
    std::cout << "AMateria: destructor called\n";
}

/*membre fonction*/
std::string const&  AMateria::getType() const
{
    return (this->_type);
}

void    AMateria::use(ICharacter& target)
{
    //std::cout << target.getName() << " use materia\n";
}