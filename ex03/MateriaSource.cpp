#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource: Default constructor called\n";
    for(int i(0); i < 4; i++)
        storage[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout << "MateriaSource: Copy constructor called\n";
    for(int i(0); i < 4; i++)
    {
        if (other.storage[i])
            this->storage[i] = other.storage[i]->clone();
        else
            this->storage[i] = NULL;
    }
}
MateriaSource&  MateriaSource::operator=(const MateriaSource& other)
{
    std::cout << "MateriaSource: assignment operator called\n";

    if (this != &other)
    {
        //delete, libery memory
        for(int i(0); i < 4; i++)
        {
            if (this->storage[i])
            {
                delete this->storage[i];
                break ;
            }
        }
        //assignment
        for(int i(0); i < 4; i++)
        {
            if (other.storage[i])
                this->storage[i] = other.storage[i]->clone();
        }
    }
    return (*this);
}
MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSouce: destructor called\n";
    for(int i(0); i < 4; i++)
    {
        if (this->storage[i])
        {
            delete this->storage[i];
            this->storage[i] = NULL;
        }
    }
}

/*membre fonction*/
void    MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return ;
    for(int i(0); i < 4; i++)
    {
        if (!storage[i])
        {
            storage[i] = m;
            std::cout << "MateriaSource learned a new source\n";
            return ;
        }
    }
    std::cout << "MateriaSource storage is full\n";
}
AMateria*   MateriaSource::createMateria(std::string const& type)
{
    for(int i(0); i < 4; i++)
    {
        if (storage[i]->getType() == type && storage[i])
        {
            AMateria*   copy = storage[i]->clone();
            std::cout << "copy clone type: " << copy->getType() << std::endl;
            return (copy);
        }
            
    }
    return (NULL);
}
