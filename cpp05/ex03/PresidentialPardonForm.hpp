#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		const std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &presidentialForm);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialForm);
		~PresidentialPardonForm();

		std::string getTarget() const;

		void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm& presidentialForm);

#endif