#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include <iostream>

int main() {
    std::cout << "--- CREATING STAFF ---" << std::endl;
    Bureaucrat boss("Boss", 1);
    Intern someRandomIntern;

    std::cout << "\n--- INTERN WORKING ---" << std::endl;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    if (rrf != NULL) {
        std::cout << "\n--- BOSS PROCESSING FORM ---" << std::endl;
        boss.signForm(*rrf);
        boss.executeForm(*rrf);

        std::cout << "\n--- CLEANING MEMORY ---" << std::endl;
        delete rrf; 
    }

    std::cout << "\n--- UNKNOWN FORM TEST ---" << std::endl;
    AForm* unknown = someRandomIntern.makeForm("vacation request", "Boss");
    if (unknown != NULL) {
        delete unknown;
    }

    return (0);
}