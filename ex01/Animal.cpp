#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout<< "A new animal was created" <<std::endl;
}

Animal::~Animal() {
	std::cout << "AN animal was destroyed" <<std::endl;
}

const std::string  &Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout<< "The animal makes a sound" <<std::endl;
}

