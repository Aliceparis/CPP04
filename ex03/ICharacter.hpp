#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include <iostream>
#include "Amateria.hpp"

class   AMateria;

class   ICharacter
{
    public:
        virtual ~ICharacter();
        virtual std::string const& getName() const = 0;
        virtual void   equip(AMateria* m) = 0;
        virtual void   unequip(int idx) = 0;
        virtual void    use(int idx, ICharacter& target) = 0;
};

/*
ICharacter is the interface, dont need the constructor
all the membre fonction in interface is public
the membre fonction is abastrait fonction, they need to be concrete in the class heitage

*/

class   Character: public ICharacter
{
    private:
        std::string _name;
        AMateria*   inventaire[4];

    public:
        Character(std::string const& name);
        Character(const Character& other);
        Character&  operator=(const Character& other);
        ~Character();

        /*membre fonction*/
        std::string const&  getName() const;
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter& target);
};




#endif