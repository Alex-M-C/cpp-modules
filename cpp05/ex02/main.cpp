#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand(time(NULL));

	std::cout << "--- CREATING BUREAUCRATS ---" << std::endl;
	Bureaucrat boss("Boss", 1);
	Bureaucrat mid("Mid", 70);
	Bureaucrat intern("Intern", 150);

	std::cout << "\n--- CREATING FORMS ---" << std::endl;
	ShrubberyCreationForm shrubbery("Home");
	RobotomyRequestForm robotomy("Bender");
	PresidentialPardonForm pardon("Ford Prefect");

	std::cout << "\n--- SHRUBBERY CREATION FORM ---" << std::endl;
	intern.signForm(shrubbery);
	mid.signForm(shrubbery);
	mid.executeForm(shrubbery);

	std::cout << "\n--- ROBOTOMY REQUEST FORM ---" << std::endl;
	mid.signForm(robotomy);
	mid.executeForm(robotomy);
	boss.executeForm(robotomy);
	boss.executeForm(robotomy);
	boss.executeForm(robotomy);
	boss.executeForm(robotomy);

	std::cout << "\n--- PRESIDENTIAL PARDON FORM ---" << std::endl;
	mid.signForm(pardon);
	boss.signForm(pardon);
	boss.executeForm(pardon);

	return (0);
}