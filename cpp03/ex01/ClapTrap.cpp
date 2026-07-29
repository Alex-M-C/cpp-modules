#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Not named"), hp(10), ep(10), dp(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), dp(0) {
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) : name(clapTrap.name), hp(clapTrap.hp), ep(clapTrap.ep), dp(clapTrap.dp) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &clapTrap) {
		this->name = clapTrap.name;
		this->hp = clapTrap.hp;
		this->ep = clapTrap.ep;
		this->dp = clapTrap.dp;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->hp <= 0) {
		std::cout << "ClapTrap " << this->name << " is dead and cannot attack!" << std::endl;
		return ;
	}
	if (this->ep <= 0) {
		std::cout << "ClapTrap " << this->name << " has no energy left!" << std::endl;
		return ;
	}
	this->ep--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->dp << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp <= 0) {
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
		return ;
	}
	if (amount >= static_cast<unsigned int>(this->hp)) {
		this->hp = 0;
		std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage and died!" << std::endl;
	}
	else {
		this->hp -= amount;
		std::cout << "ClapTrap " << this->name << " has lost " << amount << " health points!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hp <= 0) {
		std::cout << "ClapTrap " << this->name << " is dead and cannot repair!" << std::endl;
		return ;
	}
	if (this->ep <= 0) {
		std::cout << "ClapTrap " << this->name << " has no energy left!" << std::endl;
		return ;
	}
	this->ep--;
	this->hp += amount;
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " health points!" << std::endl;
}

void ClapTrap::checkStats(void) {
	std::cout << "\n=== ClapTrap " << this->name << " Stats ===" << std::endl;
    std::cout << std::right;
    std::cout << "- Health Points: " << std::setw(6) << this->hp << std::endl;
    std::cout << "- Energy Points: " << std::setw(6) << this->ep << std::endl;
    std::cout << "- Attack Damage: " << std::setw(6) << this->dp << std::endl;
	std::cout << "============================\n" << std::endl;
}
