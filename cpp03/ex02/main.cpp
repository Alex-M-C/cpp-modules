#include "FragTrap.hpp"

int main() {
	ClapTrap ct("Clark");
	FragTrap st("Frank");
	FragTrap st2;

	ct.checkStats();
	ct.attack("someone");
	ct.checkStats();
	ct.takeDamage(5);
	ct.checkStats();

	st.checkStats();
	st.attack("someone");
	st.takeDamage(10);
	st.checkStats();
	st.highFivesGuys();

	st2.checkStats();
	st2 = st;
	st2.checkStats();
	
	return (0);
}
