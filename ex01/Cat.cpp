/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:51:15 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 18:51:48 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain()){
	this->type = "Cat";
	std::cout << "A new cat was created" <<std::endl;
}

Cat::Cat(const Cat &source) : Animal(source), brain(new Brain(*source.brain)) {}

Cat &Cat::operator=(const Cat &source) {
	if (this != &source){
		Animal::operator=(source);
		delete brain;
		brain = new Brain(*source.brain);
	}
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "A new cat was destroyed" <<std::endl;
}

void Cat::makeSound() const {
	std::cout << "The cat meows: Meow meow" <<std::endl;
}

