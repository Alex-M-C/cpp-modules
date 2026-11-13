#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &) {
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &) {
	std::cout << "Intern copy assignment operator called" << std::endl;
	return (*this);
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

AForm *Intern::createShrubberyForm(std::string target) {
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::createRobotomyForm(std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm *Intern::createPresidentialForm(std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string formName, std::string targetName) {
	std::string formNames[] = {
		"create shrubbery",
		"robotomy request",
		"presidential pardon"
	};
	AForm *(Intern::*functions[])(std::string target) = {
		&Intern::createShrubberyForm,
		&Intern::createRobotomyForm,
		&Intern::createPresidentialForm
	};
	for (size_t i = 0; i < 3; i++) {
		if (formName.compare(formNames[i]) == 0) {
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*functions[i])(targetName));
		}
	}
	std::cerr << "Form " << formName << " does not exist" << std::endl;
	return (NULL);
}
