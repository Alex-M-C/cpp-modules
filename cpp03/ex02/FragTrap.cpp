#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->hp = 100;
	this->ep = 100;
	this->dp = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hp = 100;
	this->ep = 100;
	this->dp = 30;
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap){
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &fragTrap) {
		ClapTrap::operator=(fragTrap);
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->name << " requested a high-five" << std::endl;
}
