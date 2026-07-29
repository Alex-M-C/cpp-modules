#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& fragTrap);
		FragTrap& operator=(const FragTrap& fragTrap);
		virtual ~FragTrap();
		
		void highFivesGuys(void);
};

#endif