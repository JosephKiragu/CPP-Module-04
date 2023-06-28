#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria {
protected:
    std::string type;

public:
    AMateria(std::string const &type) : type(type) {}
    virtual ~AMateria() {}

    std::string const & getType() const { return type; }
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};

#endif