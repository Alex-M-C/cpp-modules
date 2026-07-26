#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() {
	if (!this->weapon) {
		std::cout << name << " attacks with their bare hands" << std::endl;
	}
	else {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	}
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
