#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
class WrongAnimal{
    protected:
        std::string type;
    public:
        ~WrongAnimal();
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal& operator=(const WrongAnimal &src);
        std::string getType() const;
        void makesound() const;
};
#endif