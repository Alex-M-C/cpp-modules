#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), target("None") {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy Request Form", 72, 45),
		target(target) {
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyForm) : AForm(robotomyForm),
		target(robotomyForm.target) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyForm) {
	if (this != &robotomyForm) {
		AForm::operator=(robotomyForm);
	}
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const {
	return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!this->getSigned()) {
		throw FormNotSignedException();
	}
	else if (executor.getGrade() > this->getGradeExec()) {
		throw GradeTooLowException();
	}
	std::cout << "*Drill noises*" << std::endl;
	if (rand() % 2 == 0) {
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	}
	else {
		std::cout << "Robotomy has failed for " << this->target << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &robotomyForm)
{
	std::string isSigned = robotomyForm.getSigned() ? "Yes" : "No";
	out << "RobotomyRequestForm info:"
						<< std::endl << "-Name:\t\t\t"			<< robotomyForm.getName()
						<< std::endl << "-Signed:\t\t"			<< isSigned
						<< std::endl << "-Target:\t\t"			<< robotomyForm.getTarget()
						<< std::endl << "-Signature grade:\t"	<< robotomyForm.getGradeSign()
						<< std::endl << "-Execution grade:\t"	<< robotomyForm.getGradeExec();
	return (out);
}
