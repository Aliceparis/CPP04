#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class   Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const std::string type);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        /*membre fonction*/
        virtual void    makeSound() const = 0;

        /*getter*/
        std::string getType() const;
};


class   Dog: public Animal
{
    private:
        Brain*  _brain;
    public:
        Dog();
        Dog(const Dog& other);
        Dog&    operator=(const Dog& other);
        ~Dog();

        /*membre fonction*/
        void    makeSound() const;

        /*getter*/
        Brain*  getbrain() const;
};

class   Cat: public Animal
{
    private:
        Brain*  _brain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat&    operator=(const Cat& other);
        ~Cat();
        
        /*membre fonction*/
        void    makeSound() const;

        /*getter*/
        Brain*  getbrain() const;
};


#endif