#include "ICharacter.hpp"

ICharacter::~ICharacter()
{
    std::cout << "ICharacter: destructor called\n";
}

Character::Character(std::string const& name): _name(name)
{
    std::cout << "Character: Param constructor called\n";
    for(int i(0); i < 4; i++)
        inventaire[i] = NULL;
}
Character::Character(const Character& other): _name(other.getName())
{
    std::cout << "Character: Copy constructor called\n";
    for(int i(0); i < 4; i++)
    {
        if (other.inventaire[i])
            this->inventaire[i] = other.inventaire[i]->clone();
        else
            this->inventaire[i] = NULL;
    }
}
Character&  Character::operator=(const Character& other)
{
    std::cout << "Character: assignment operator called\n";
    if (this != &other)
    {
        this->_name = other.getName();
        //delete inventaire liberer la memoire 
        for(int i(0); i < 4; i++)
        {
            delete inventaire[i];
            inventaire[i] = NULL;
        }
        //copye le nouveau
        for(int i(0); i < 4; i++)
        {
            if (other.inventaire[i])
                this->inventaire[i] = other.inventaire[i]->clone();
        }
    }
    return (*this);
}
Character::~Character()
{
    std::cout << "Character: destructor called\n";
    for(int i(0); i < 4; i++)
    {
        if (this->inventaire[i])
        {
            delete inventaire[i];
            inventaire[i] = NULL;
        }
    }
}

/*membre fonction*/
std::string const&  Character::getName() const
{
    return (this->_name);
}
void    Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for(int i(0); i < 4; i++)
    {
        if (!this->inventaire[i])
        {
            this->inventaire[i] = m;
            return ;
        } 
    }
}
void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->inventaire[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventaire[idx])
        inventaire[idx]->use(target);
}