#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* zomHorde;

	if (N <= 0){
		std::cerr << "Real zombies must be created so N must be more than 0" << std::endl;
		return (NULL);
	}
	zomHorde = new Zombie[N];
	for (size_t i = 0; i < (size_t)N; i++) {
		zomHorde[i].setName(name);
	}
	return (zomHorde);
}
