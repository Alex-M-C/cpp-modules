#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class AForm {
	private:
		const std::string name;
		bool _signed;
		const int gradeSign;
		const int gradeExec;
	public:
		AForm();
		AForm(const std::string name, const int gradeSign, const int gradeExec);
		AForm(const AForm &form);
		AForm &operator=(const AForm &form);
		virtual ~AForm();

		std::string getName() const;
		bool getSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;

		void beSigned(const Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

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
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form is not signed");
				}
		};
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif