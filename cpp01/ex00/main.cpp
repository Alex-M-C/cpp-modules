#include "Zombie.hpp"

int main() {
	Zombie* zom = newZombie("Percival");
	randomChump("Tempi");
	zom->announce();
	delete zom;
	return (0);
}
