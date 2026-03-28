#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(char *firstName, char *lastName, char *nickName, char *phone, char *darkestSecret) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickName= nickName;
    this->phone = phone;
    this->darkestSecret = darkestSecret;
}

char *Contact::getFirstName() {
    return firstName;
}

char *Contact::getLastName() {
    return lastName;
}

char *Contact::getNickName() {
    return nickName;
}

char *Contact::getPhone() {
    return phone;
}

char *Contact::getDarkestSecret() {
    return darkestSecret;
}