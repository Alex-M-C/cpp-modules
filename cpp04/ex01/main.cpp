#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

	for (size_t i = 0; i < 4; i++) {
		animals[i]->makeSound();
	}
	for (size_t i = 0; i < 4; i++) {
		delete animals[i];
	}
	return (0);
}
