#include "Cure.hpp"
#include "ICharacter.hpp"

void Cure::use(ICharacter& target) {
	std::cout << "* Heals " << target.getName() << "'s wounds *" <<std::endl;
}