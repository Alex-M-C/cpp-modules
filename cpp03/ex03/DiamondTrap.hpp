#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& diamondTrap);
		DiamondTrap& operator=(const DiamondTrap& diamondTrap);
		~DiamondTrap();
		
		using ScavTrap::attack;
		
		void whoAmI();
};


#endif