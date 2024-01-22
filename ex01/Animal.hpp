#ifndef FILE_HPP
#define FILE_HPP
#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &src1);
        Animal& operator=(const Animal &src1);
        virtual void makeSound() const;
        std::string getType() const;  
};

#endif