#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class   Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& other);
        Brain&  operator=(const Brain& other);
        ~Brain();

        /*getter setter*/
        void    setidea(int index, const std::string idee);
        std::string getidea(int index) const;
};





#endif