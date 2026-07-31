#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& cat) : Animal(cat) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*cat.brain);
}

Cat& Cat::operator=(const Cat& cat) {
    std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cat) {
		Animal::operator=(cat);
		*this->brain = *cat.brain;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const {
	std::cout << "*Meow*" << std::endl;
}
