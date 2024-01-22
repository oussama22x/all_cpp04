#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor Called\n";
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called\n";
}

Brain::Brain(const Brain &src)
{
   std::cout << "Brain copy COnstructor Called\n";
   for (int  i = 0; i < 100; i++)
   {
    this->ideas[i] = src.ideas[i];
   }
}

Brain& Brain::operator=(const Brain &src)
{
    std::cout << "Copy Assigment called\n";
    if(this != &src)
    {
        for (int  i = 0; i < 100; i++)
        {
            this->ideas[i] = src.ideas[i];
        }
    }
    return(*this);
}