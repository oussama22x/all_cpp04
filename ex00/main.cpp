#include "Animal.hpp"
#include "Dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
const Animal* meta = new Animal();

const Animal* j = new Dog();

const WrongAnimal* i = new WrongCat();

std::cout << j->getType() << " " << std::endl;
std::cout <<i->getType() << " " << std::endl;
j->makeSound();
i->makeSound(); 
meta->makeSound();
delete j;
delete i;
delete meta;
return 0;
}