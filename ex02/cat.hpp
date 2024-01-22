#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat: public AAnimal{
    private:
        Brain *ida;
    public:
    Cat();
    ~Cat();
    Cat(const Cat &src);
    Cat& operator=(const Cat &src);
    void makesound() const;
    std::string getType() ;
};
#endif