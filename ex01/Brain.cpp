#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Class Brain constructor Default called\n";
    for (int i(0); i < 100; i++)
        ideas[i] = "";
}
Brain::Brain(const Brain& other)
{
    std::cout << "Class Brain constructor Copy called\n";
    for (int i(0); i < 100; i++)
        ideas[i] = other.ideas[i];
}
Brain&  Brain::operator=(const Brain& other)
{
    std::cout << "Class Brain assignment operator called\n";
    if (this != &other)
        for(int i(0); i < 100; i++)
            this->ideas[i] = other.ideas[i];
    return (*this);
}
Brain::~Brain()
{
    std::cout << "Class Brain destructor called\n";
}

/*getter setter*/
void    Brain::setbrain(int index, const std::string idee)
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

