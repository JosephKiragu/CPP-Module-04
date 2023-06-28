/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:51:15 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 18:51:55 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    // Allocate space for an array of Animal pointers
    Animal** animals = new Animal*[4];
    
    // Fill the first half of the array with Dogs
    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    
    // Fill the second half of the array with Cats
    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();
    
    // Make each animal in the array make a sound
    for (int i = 0; i < 4; i++) {
        std::cout << animals[i]->getType() << " ";
        animals[i]->makeSound();
    }
    
    // Delete each animal in the array
    for (int i = 0; i < 4; i++)
        delete animals[i];
    
    // Delete the array itself
    delete[] animals;
    
    return 0;
}
