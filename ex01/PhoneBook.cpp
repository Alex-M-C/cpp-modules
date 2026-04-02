
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    currentIndex = 0;
    nContacts = 0;
}

void PhoneBook::nextIndex() {
    currentIndex++;
    if (currentIndex == 8) {
        currentIndex = 0;
    }
}

void displayFormat(std::string &data) {
    if (data.length() > 10) {
        data = data.substr(0,9).append(".");
    }
}

bool isReallyEmpty(std::string &word) {
    word.erase(0, word.find_first_not_of(" \t\n\r\v\f"));
    word.erase(word.find_last_not_of(" \t\n\r\v\f") + 1);
    if (word.empty()) {
        return true;
    }
    return false;
}

bool isNumber(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isdigit(str.at(i))) {
            return false;
        }
    }
    return true;
}

int PhoneBook::addContact() {
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phone;
    std::string darkestSecret;

    std::cout << "To add a Contact, fill the next info (Empty fields are NOT allowed):" << std::endl;

    std::cout << "First name: ";
    std::getline(std::cin, firstName);
    if (isReallyEmpty(firstName)) {
        return -1;
    }

    std::cout << "Last name: ";
    std::getline(std::cin, lastName);
    if (isReallyEmpty(lastName)) {
        return -1;
    }

    std::cout << "Nickname: ";
    std::getline(std::cin, nickName);
    if (isReallyEmpty(nickName)) {
        return -1;
    }

    std::cout << "Phone number: ";
    std::getline(std::cin, phone);
    if (isReallyEmpty(phone)) {
        return -1;
    } else if (!isNumber(phone) || phone.length() < 9) {
        std::cout << "Phone field must be a 9 digit number, canceling operation...;" << std::endl;
        return 1;
    }

    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkestSecret);
    if (isReallyEmpty(darkestSecret)) {
        return -1;
    }

    contacts[currentIndex] = Contact(firstName, lastName ,nickName ,phone ,darkestSecret);
    nextIndex();
    if (nContacts < 8) {
        nContacts++;
    }
    std::cout << "Contact successfully saved" << std::endl;
    return 0;
}

int PhoneBook::searchContact() {
    std::string data;
    int wantedIndex;

    if (nContacts == 0) {
        std::cout << "There are no contacs saved, add one to use this command" << std::endl;
        return 1;
    }
    std::cout << "/¯¯¯¯¯¯¯¯¯¯V¯¯¯¯¯¯¯¯¯¯V¯¯¯¯¯¯¯¯¯¯V¯¯¯¯¯¯¯¯¯¯\\" << std::endl;
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First name" << "|"
              << std::setw(10) << "Last name" << "|" 
              << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << "+-------------------------------------------+" << std::endl;
    for (size_t i = 0; i < nContacts; i++)
    {
        std::cout << "|" << std::setw(10) << i << "|";
        data = contacts[i].getFirstName();
        displayFormat(data);
        std::cout << std::setw(10) << data << "|";
        data = contacts[i].getLastName();
        displayFormat(data);
        std::cout << std::setw(10) << data << "|";
        data = contacts[i].getNickName();
        displayFormat(data);
        std::cout << std::setw(10) << data << "|" << std::endl;
    }
    std::cout << "+-------------------------------------------+" << std::endl;

    while (true) {
        std::cout << "Enter the index of the contact you want to consult: ";
        std::getline(std::cin, data);
        if (isReallyEmpty(data) || !isNumber(data)) {
            std::cout << "Index must be a positive number" << std::endl;
            continue;
        }
        wantedIndex = std::stoi(data);
        if (wantedIndex < 0 || wantedIndex > nContacts - 1) {
            std::cout << "Index must be a number between 0 and " << nContacts - 1 << std::endl;
            continue;
        }
        break;
    }

    std::cout << "Displaying information of contact " << wantedIndex << ":" << std::endl;
    std::cout << "First name:\t" << contacts[wantedIndex].getFirstName() << std::endl;
    std::cout << "Last name:\t" << contacts[wantedIndex].getLastName() << std::endl;
    std::cout << "Nickname:\t" << contacts[wantedIndex].getNickName() << std::endl;
    std::cout << "Phone:\t\t" << contacts[wantedIndex].getPhone() << std::endl;
    std::cout << "Darkest secret:\t" << contacts[wantedIndex].getDarkestSecret() << std::endl;
    std::cout << "\nReturning to menu...\n" << std::endl;
    return 0;
}
