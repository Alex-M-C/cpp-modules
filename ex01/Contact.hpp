#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
    private:
        char *firstName;
        char *lastName;
        char *nickName;
        char *phone;
        char *darkestSecret;
    
    public:
        Contact();
        Contact(
            char *firstName,
            char *lastName,
            char *nickName,
            char *phone,
            char *darkestSecret
        );
        char *getFirstName();
        char *getLastName();
        char *getNickName();
        char *getPhone();
        char *getDarkestSecret();

};

#endif