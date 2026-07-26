
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void printPrompt() {
    std::cout << "You can enter the following commands:\n\t" 
              << "ADD: Save a new contact\n\t"
              << "SEARCH: Display a specific contact\n\t"
              << "EXIT: The program quits and the contacts are lost forever!" << std::endl;
}

int	main() {
    PhoneBook pb;
    std::string action;

    std::cout << "Welcome to our virtual booth, the best phone book in the market." << std::endl;
    printPrompt();
    while (true)
    {
        std::getline(std::cin, action);
        if (std::cin.eof()) {
            std::cout << "\nEOF detected. Goodbye!" << std::endl;
            break; 
        }
        if (action.compare("ADD") == 0) {
            if (pb.addContact() == -1) {
                std::cout << "Empty field detected, canceling operation...;" << std::endl;
            }
            printPrompt();
        } else if (action.compare("SEARCH") == 0) {
            pb.searchContact();
            printPrompt();
        } else if (action.compare("EXIT") == 0) {
            break;
        }
    }
    return 0;
}
