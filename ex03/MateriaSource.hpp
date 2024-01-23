#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "trash.hpp"
class MateriaSource : public IMateriaSource
{
    private:
        AMateria *inventory[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &src);
        ~MateriaSource();
        MateriaSource &operator=(MateriaSource const &rhs);
        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
};
#endif