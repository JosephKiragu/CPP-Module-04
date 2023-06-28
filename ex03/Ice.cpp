#include "Ice.hpp"
#include "ICharacter.hpp"


void Ice::use(ICharacter& target) {
	std::cout << "* Shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}