#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default Form"), _signed(false), gradeSign(75), gradeExec(75) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec) : name(name), _signed(false),
		gradeSign(gradeSign), gradeExec(gradeExec) {
	if (gradeSign < 1 || gradeExec < 1) {
		throw GradeTooHighException();
	}
	else if (gradeSign > 150 || gradeExec > 150) {
		throw GradeTooLowException();
	}
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &form): name(form.name), _signed(form._signed),
		gradeSign(form.gradeSign), gradeExec(form.gradeExec) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &form) {
	if (this != &form) {
		this->_signed = form._signed;
	}
	std::cout << "Form copy assignment operator called" << std::endl;
	return (*this);
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName() const {
	return (this->name);
}

bool Form::getSigned() const {
	return (this->_signed);
}

int Form::getGradeSign() const {
	return (this->gradeSign);
}

int Form::getGradeExec() const {
	return (this->gradeExec);
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
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

std::ostream &operator<<(std::ostream &out, const Form &form) {
	std::string isSigned = form.getSigned() ? "Yes" : "No";
	out << "Form info:" << std::endl << "-Name:\t\t\t"			<< form.getName()
						<< std::endl << "-Signed:\t\t"			<< isSigned
						<< std::endl << "-Signature grade:\t"	<< form.getGradeSign()
						<< std::endl << "-Execution grade:\t"	<< form.getGradeExec();
	return (out);
}
