#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Not named_clap_name"), ScavTrap(), FragTrap() {
	this->name = "Not named";
	this->hp = 100;
	this->ep = 50;
	this->dp = 30;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->name = name;
	this->hp = 100;
	this->ep = 50;
	this->dp = 30;
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap) {
	this->name = diamondTrap.name;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap) {
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &diamondTrap) {
		this->name = diamondTrap.name;
		ClapTrap::operator=(diamondTrap);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap " << this->name << " and ClapTrap " << ClapTrap::name << std::endl;
}
