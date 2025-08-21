#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class   ICharacter;

class   AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(std::string const& type);
        AMateria(const AMateria& other);
        AMateria&   operator=(const AMateria& other);
        virtual ~AMateria();

        /*membre fonction*/
        std::string const&  getType() const;
        virtual AMateria* clone() const = 0;
        virtual void    use(ICharacter& target);
        
};

class   Ice: public AMateria
{
    private:

    public:
        Ice();
        Ice(std::string const& type);
        Ice(const Ice& other);
        Ice&    operator=(const Ice& other);
        ~Ice();

        /*membre fonction*/
        AMateria*   clone() const;
        void    use(ICharacter& target);
};

class   Cure: public AMateria
{
    private:
    
    public:
        Cure();
        Cure(std::string const& type);
        Cure(const Cure& other);
        Cure&   operator=(const Cure& other);
        ~Cure();

        /*membre fonction*/
        std::string const&  getType() const;
        AMateria*   clone() const;
        void    use(ICharacter& target);
};


#endif