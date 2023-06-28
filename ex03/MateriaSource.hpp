#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
private:
	AMateria* learnedMateria[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria *m);
	virtual AMateria* createMateria(std::string const & type);
};

#endif