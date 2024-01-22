//valgrind --leak-check=full
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
const AAnimal* j = new Dog();
const AAnimal* i = new Cat();
 delete j;//should not create a leak
 delete i;
return 0;
}
