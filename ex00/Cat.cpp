#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "A new cat was created" <<std::endl;
}

Cat::~Cat() {
	std::cout << "A new cat was destroyed" <<std::endl;
}

void Cat::makeSound() const {
	std::cout << "The cat meows: Meow meow" <<std::endl;
}

