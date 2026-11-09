#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	}
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : grade(bureaucrat.grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &bureaucrat) {
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &bureaucrat) {
		this->grade = bureaucrat.grade;
	}
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
