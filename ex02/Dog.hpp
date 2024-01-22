#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
class Dog: public AAnimal{
    private:
        Brain *ida;
    public:
    Dog();
    ~Dog();
    Dog(const Dog &src);
    Dog& operator=(const Dog &src);
    void makesound() const;
    std::string getType() ;
};
#endif
