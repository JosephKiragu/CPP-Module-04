#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure() : AMateria("cure") {}
    virtual ~Cure() {}
    virtual AMateria* clone() const { return new Cure(); }
    virtual void use(ICharacter& target);
};

#endif