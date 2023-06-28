#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
public:
	Brain();
	Brain(const Brain  &source);
	Brain &operator = (const Brain &source);

private:
	std::string ideas[100];
};

#endif