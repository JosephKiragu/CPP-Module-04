/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:51:15 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 18:51:27 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()){
	this->type = "Dog";
	std::cout<< "A new dog was created" << std::endl;
}

Dog::Dog(const Dog &source) : Animal(source), brain(new Brain(*source.brain)){}

Dog &Dog::operator=(const Dog &source) {
	if (this != &source){
		Animal::operator=(source);
		delete brain;
		brain = new Brain(*source.brain);
	}
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout<< "A dog was destroyed" <<std::endl;
}

void Dog::makeSound() const {
	std::cout << "The dog barks: woof woof" << std::endl;
}