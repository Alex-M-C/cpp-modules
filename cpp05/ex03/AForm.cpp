#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default AForm"), _signed(false), gradeSign(75), gradeExec(75) {
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec) : name(name), _signed(false),
		gradeSign(gradeSign), gradeExec(gradeExec) {
	if (gradeSign < 1 || gradeExec < 1) {
		throw GradeTooHighException();
	}
	else if (gradeSign > 150 || gradeExec > 150) {
		throw GradeTooLowException();
	}
	std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(const AForm &form): name(form.name), _signed(form._signed),
		gradeSign(form.gradeSign), gradeExec(form.gradeExec) {
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &form) {
	if (this != &form) {
		this->_signed = form._signed;
	}
	std::cout << "AForm copy assignment operator called" << std::endl;
	return (*this);
}

AForm::~AForm() {
	std::cout << "AForm destructor called" << std::endl;
}

std::string AForm::getName() const {
	return (this->name);
}

bool AForm::getSigned() const {
	return (this->_signed);
}

int AForm::getGradeSign() const {
	return (this->gradeSign);
}

int AForm::getGradeExec() const {
	return (this->gradeExec);
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (this->_signed) {
		throw FormAlreadySignedException();
	}
	if (bureaucrat.getGrade() <= this->gradeSign) {
		this->_signed = true;
	}
	else {
		throw GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &out, const AForm &form) {
	std::string isSigned = form.getSigned() ? "Yes" : "No";
	out << "AForm info:" << std::endl << "-Name:\t\t\t"			<< form.getName()
						<< std::endl << "-Signed:\t\t"			<< isSigned
						<< std::endl << "-Signature grade:\t"	<< form.getGradeSign()
						<< std::endl << "-Execution grade:\t"	<< form.getGradeExec();
	return (out);
}
