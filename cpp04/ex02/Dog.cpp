#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& dog) : Animal(dog) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*dog.brain);
}

Dog& Dog::operator=(const Dog& dog) {
    std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog) {
		Animal::operator=(dog);
		*this->brain = *dog.brain;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const {
	std::cout << "*Bark Bark*" << std::endl;
}
