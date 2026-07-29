#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->hp = 100;
	this->ep = 50;
	this->dp = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hp = 100;
	this->ep = 50;
	this->dp = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& scavTrap)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &scavTrap) {
		ClapTrap::operator=(scavTrap);
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->hp <= 0) {
		std::cout << "ScavTrap " << this->name << " is dead and cannot attack!" << std::endl;
		return ;
	}
	if (this->ep <= 0) {
		std::cout << "ScavTrap " << this->name << " has no energy left!" << std::endl;
		return ;
	}
	this->ep--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->dp << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is now in Gatekeeper mode" << std::endl;
}
