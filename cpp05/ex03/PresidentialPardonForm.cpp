#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), target("None") {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential Pardon Form", 25, 5),
		target(target) {
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialForm) : AForm(presidentialForm),
		target(presidentialForm.target) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialForm) {
	if (this != &presidentialForm) {
		AForm::operator=(presidentialForm);
	}
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!this->getSigned()) {
		throw FormNotSignedException();
	}
	else if (executor.getGrade() > this->getGradeExec()) {
		throw GradeTooLowException();
	}
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &presidentialForm)
{
	std::string isSigned = presidentialForm.getSigned() ? "Yes" : "No";
	out << "PresidentialPardonForm info:"
						<< std::endl << "-Name:\t\t\t"			<< presidentialForm.getName()
						<< std::endl << "-Signed:\t\t"			<< isSigned
						<< std::endl << "-Target:\t\t"			<< presidentialForm.getTarget()
						<< std::endl << "-Signature grade:\t"	<< presidentialForm.getGradeSign()
						<< std::endl << "-Execution grade:\t"	<< presidentialForm.getGradeExec();
	return (out);
}
