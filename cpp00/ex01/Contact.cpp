#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phone, std::string darkestSecret) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickName= nickName;
    this->phone = phone;
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickName() const {
    return nickName;
}

std::string Contact::getPhone() const {
    return phone;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}