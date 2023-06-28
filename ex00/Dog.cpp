#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout<< "A new dog was created" << std::endl;
}

Dog::~Dog() {
	std::cout<< "A dog was destroyed" <<std::endl;
}

void Dog::makeSound() const {
	std::cout << "The dog barks: woof woof" << std::endl;
}