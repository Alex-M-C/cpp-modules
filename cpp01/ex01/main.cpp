#include "Zombie.hpp"

int main() {
	int hordeNumber = 3;
	Zombie* zom = zombieHorde(hordeNumber, "Horde Percival");

	if (!zom){
		return (1);
	}
	for (size_t i = 0; i < (size_t)hordeNumber; i++) {
		zom[i].announce();
	}
	delete[] zom;
	return (0);
}
