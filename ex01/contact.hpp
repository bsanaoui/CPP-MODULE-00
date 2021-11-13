#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class contact {

    private :
        std::string  first_name;
        std::string  last_name;
        std::string  nickname;
        std::string  phone_number;
        std::string  darkest_secret;

    public :
        contact(std::string, std::string, std::string, std::string, std::string);
};

#endif CONTACT_HPP