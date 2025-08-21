#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include "Amateria.hpp"

class   AMateria;

class   IMateriaSource
{
    public:
        virtual ~IMateriaSource()
        {
            std::cout << "IMateriaSource: destructor called\n";
        }
        virtual void    learnMateria(AMateria* m) = 0;
        virtual AMateria*   createMateria(std::string const& type) = 0;
};

class   MateriaSource: public IMateriaSource
{
    private:
        AMateria*   storage[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource&  operator=(const MateriaSource& other);
        ~MateriaSource();

        /*membre fonction*/
        void    learnMateria(AMateria* m);
        AMateria*   createMateria(std::string const& type);
};


#endif