#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook {
    private:
        Contact contacts[8];
        int currentIndex;
        int nContacts;
        void nextIndex(void);
    public:
		PhoneBook();
		int addContact(void);
		int searchContact(void);
};

#endif