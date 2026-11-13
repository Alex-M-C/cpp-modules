#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    private:
        const std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyForm);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberyForm);
        ~ShrubberyCreationForm();

        std::string getTarget() const;

        void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& shrubberyForm);

#endif
