#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>

class AForm;

class Intern {
	public:
		Intern();
		Intern(const Intern &intern);
		Intern &operator=(const Intern &intern);
		~Intern();

		AForm *createShrubberyForm(std::string target);
		AForm *createRobotomyForm(std::string target);
		AForm *createPresidentialForm(std::string target);

		AForm *makeForm(std::string formName, std::string targetName);
};

#endif