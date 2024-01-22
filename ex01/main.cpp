#include "Animal.hpp"
#include "Dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"
int main( void )
{
    Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }
    return 0;
}