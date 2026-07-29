#include "ScavTrap.hpp"

int main() {
	ClapTrap ct("Clark");
	ScavTrap st("Sully");

	ct.checkStats();
	ct.attack("someone");
	ct.checkStats();
	ct.takeDamage(5);
	ct.checkStats();

	st.checkStats();
	st.attack("someone");
	st.takeDamage(10);
	st.checkStats();
	st.guardGate();

	return (0);
}
