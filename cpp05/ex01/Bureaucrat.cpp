#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	}
	this->grade = grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : grade(bureaucrat.grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &bureaucrat) {
	if (this != &bureaucrat) {
		this->grade = bureaucrat.grade;
	}
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incrementGrade(int n) {
	int temp = getGrade() - n;
	if (temp < 1) {
		throw GradeTooHighException();
	}
	else if (temp > 150) {
		throw GradeTooLowException();
	}
	this->grade = temp;
}

void Bureaucrat::decrementGrade(int n) {
	int temp = getGrade() + n;
	if (temp < 1) {
		throw GradeTooHighException();
	}
	else if (temp > 150) {
		throw GradeTooLowException();
	}
	this->grade = temp;
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch(const Form::GradeTooLowException& gtl) {
		std::cout << this->name << " couldn’t sign " << form.getName() << " because " << gtl.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
