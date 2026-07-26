#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phone;
        std::string darkestSecret;
    public:
        Contact();
        Contact(
            std::string firstName,
            std::string lastName,
            std::string nickName,
            std::string phone,
            std::string darkestSecret
        );
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhone() const;
        std::string getDarkestSecret() const;

};

#endif