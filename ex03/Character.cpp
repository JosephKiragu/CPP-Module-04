#include "Character.hpp"

Character::Character(std::string const &name): name(name) {
	for (int i = 0; i < 4 ; i++) {
		_inventory[i] = nullptr;
	}
}

// Copy constructor
Character::Character(Character const & src) {
    this->name = src.name;
    for (int i = 0; i < 4; i++) {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = nullptr;
    }
}

// Assignment operator
Character & Character::operator=(Character const & rhs) {
    if (this != &rhs) {
        this->name = rhs.name;
        for (int i = 0; i < 4; i++) {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (rhs._inventory[i])
                this->_inventory[i] = rhs._inventory[i]->clone();
            else
                this->_inventory[i] = nullptr;
        }
    }
    return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++){delete _inventory[i];}
}

std::string const & Character::getName() const{ return name;}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == nullptr)
			_inventory[i] = m;
			return;
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || _inventory[idx] == nullptr)
		return;
	delete _inventory[idx];
	_inventory[idx] = nullptr ;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4 || _inventory[idx] == nullptr)
		return;
	_inventory[idx]->use(target);
}