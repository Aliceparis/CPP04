#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: constructor Default called\n";
    for(int i(0); i < 100; i++)
        ideas[i] = "";
}
Brain::Brain(const Brain& other)
{
    std::cout << "Brain: constructor copy called\n";
    for(int i(0); i < 100; i++)
        ideas[i] = other.ideas[i];
}
Brain&  Brain::operator=(const Brain& other)
{
    std::cout << "Brain: assignment operator called\n";
    if (this != &other)
        for(int i(0); i < 100; i++)
            ideas[i] = other.ideas[i];
    return (*this);
}
Brain::~Brain()
{
    std::cout << "Brain: destructor called\n";
}

/*getter setter*/
void    Brain::setidea(int index, const std::string idee)
{
    if (index >= 0 && index < 100)
        ideas[index] = idee;
    else
        std::cout << "Error: index invalide\n";
}
std::string Brain::getidea(int index) const
{
    if (index >= 0 && index < 100)
        return (this->ideas[index]);
    else
        return ("");
}
