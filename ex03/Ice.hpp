#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"


class Ice : public AMateria {
public :
	Ice() : AMateria("Ice") {}
	virtual ~Ice() {}
	virtual AMateria* clone() const {return new Ice();}
	virtual void use(ICharacter& target);

};
#endif