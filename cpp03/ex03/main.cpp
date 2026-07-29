#include "DiamondTrap.hpp"

int main() {
	std::cout << "=== 1. CREATION AND STATS ===" << std::endl;
	DiamondTrap dia("Diana");
	dia.whoAmI();
	dia.checkStats();

	std::cout << "\n=== 2. INHERITED ACTIONS ===" << std::endl;
	dia.attack("Target");
	dia.guardGate();
	dia.highFivesGuys();

	std::cout << "\n=== 3. CANONICAL FORM (COPY & ASSIGNMENT) ===" << std::endl;
	DiamondTrap copy(dia);
	copy.whoAmI();
	copy.checkStats();

	DiamondTrap assigned("Temp");
	assigned = dia;
	assigned.whoAmI();
	assigned.checkStats();

	std::cout << "\n=== 4. DESTRUCTION CHAIN ===" << std::endl;
	return (0);
}
