#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool _signed;
		const int gradeSign;
		const int gradeExec;
	public:
		Form();
		Form(const std::string name, const int gradeSign, const int gradeExec);
		Form(const Form &form);
		Form &operator=(const Form &form);
		~Form();

		std::string getName() const;
		bool getSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;

		void beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade can't be higher than 1");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade is too low");
				}
		};
		class FormAlreadySignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form is already signed");
				}
		};
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif