#ifndef FILE_HPP
#define FILE_HPP
#include <iostream>
class AAnimal{
    protected:
        std::string type;
    public:
        AAnimal();
        virtual ~AAnimal();
        AAnimal(const AAnimal &src1);
        AAnimal& operator=(const AAnimal &src1);
        virtual void makesound() const = 0;
        std::string getType() const;
        
};
#endif