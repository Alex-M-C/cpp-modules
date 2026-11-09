#include "Bureaucrat.hpp"

int main() {
    try {
		Bureaucrat b = Bureaucrat("Juan", 99);
		std::cout << b << std::endl;
		b.incrementGrade(5);
		std::cout << b << std::endl;
		Bureaucrat b2 = Bureaucrat("Manuel", 151);
	}
	catch(const Bureaucrat::GradeTooHighException& gth) {
		std::cerr << gth.what() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& gtl) {
		std::cerr << gtl.what() << '\n';
	}
    return (0);
}
