#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for(int i = 0; i < 4; i++) { learnedMateria[i] = nullptr;}
}

MateriaSource::~MateriaSource() {
	for(int i = 0; i < 4; i++) { learnedMateria[i] = nullptr;}
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (learnedMateria[i] == nullptr)
			learnedMateria[i] = m->clone();
			return;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (learnedMateria[i] != nullptr && learnedMateria[i]->getType() == type)
			return learnedMateria[i]->clone();
	}
}