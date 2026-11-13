#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
	std::cout << "--- TEST 1: Form Creation ---" << std::endl;
	try {
		Form validForm("Contract", 50, 50);
		std::cout << validForm << std::endl;
		
		Form invalidForm("Illegal", 0, 50); 
	}
	catch (std::exception &e) {
		std::cerr << "Exception caught during creation: " << e.what() << std::endl;
	}

	std::cout << "\n--- TEST 2: Signature Attempts ---" << std::endl;
	try {
		Bureaucrat boss("Boss", 1);
		Bureaucrat intern("Intern", 150);
		Form document("Important Document", 50, 50);

		std::cout << document << std::endl;

		intern.signForm(document);
		std::cout << document << std::endl;

		boss.signForm(document);
		std::cout << document << std::endl;

		intern.signForm(document);
	}
	catch (std::exception &e) {
		std::cerr << "Unexpected exception: " << e.what() << std::endl;
	}

	return (0);
}