#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <iomanip>

class ClapTrap {
	protected:
		std::string name;
		int hp;
		int ep;
		int dp;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& clapTrap);
		ClapTrap& operator=(const ClapTrap& clapTrap);
		virtual ~ClapTrap();

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void checkStats(void);
};

#endif
