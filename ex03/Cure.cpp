#include "Amateria.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "Cure: Default constructor called\n";
}

Cure::Cure(std::string const& type): AMateria("cure")
{
    std::cout << "Cure: Param constructor called\n";
}
Cure::Cure(const Cure& other): AMateria(other)
{
    std::cout << "Cure: Copy constructor called\n";
}
Cure&   Cure::operator=(const Cure& other)
{
    std::cout << "Cure: assignement operator called\n";
    if (this != &other)
        AMateria::operator=(other);
    return (*this);
}
Cure::~Cure()
{
    std::cout << "Cure: Destructor called\n";
}

/*membre fonction*/
std::string const&  Cure::getType() const
{
    return (this->_type);
}
AMateria*   Cure::clone() const
{
    return (new Cure(*this));
}
void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}