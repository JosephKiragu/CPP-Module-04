/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:51:15 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 18:54:49 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i <100; i++)
		ideas[i] = "";
}

Brain::Brain(const Brain &source) {
	for (int i = 0; i < 100; i++)
		ideas[i] = source.ideas[i];
}

Brain &Brain::operator=(const Brain &source) {
	if (this != &source){
		for (int i = 0; i < 100; i ++)
			ideas[i] = source.ideas[i];
	}
	return *this;
}

