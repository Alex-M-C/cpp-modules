#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), target("None") {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery Creation Form", 145, 137),
		target(target) {
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyForm) : AForm(shrubberyForm),
		target(shrubberyForm.target) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyForm) {
	if (this != &shrubberyForm) {
		AForm::operator=(shrubberyForm);
	}
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
    return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!this->getSigned()) {
		throw FormNotSignedException();
	}
	else if (executor.getGrade() > this->getGradeExec()) {
		throw GradeTooLowException();
	}
	std::string outFile = this->getTarget() + "_shrubbery";
	std::ofstream outputFile(outFile.c_str());
	if(!outputFile.is_open()) {
		std::cerr << "Failed to create file" << outFile << std::endl;
		return ;
	}
	outputFile	<< "   /\\" 	<< std::endl
				<< "  /**\\" 	<< std::endl
				<< " /****\\" 	<< std::endl
				<< "/******\\" 	<< std::endl
				<< "   ||" 		<< std::endl;
}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &shrubberyForm)
{
	std::string isSigned = shrubberyForm.getSigned() ? "Yes" : "No";
	out << "ShrubberyCreationForm info:" 
						<< std::endl << "-Name:\t\t\t"			<< shrubberyForm.getName()
						<< std::endl << "-Signed:\t\t"			<< isSigned
						<< std::endl << "-Target:\t\t"			<< shrubberyForm.getTarget()
						<< std::endl << "-Signature grade:\t"	<< shrubberyForm.getGradeSign()
						<< std::endl << "-Execution grade:\t"	<< shrubberyForm.getGradeExec();
	return (out);
}
