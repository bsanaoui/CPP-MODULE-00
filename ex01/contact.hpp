#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class contact {

    private :
        int          _index;
        std::string  _first_name;
        std::string  _last_name;
        std::string  _nickname;
        std::string  _phone_number;
        std::string  _darkest_secret;

    public :
        contact();
       // contact(int, std::string, std::string, std::string, std::string, std::string);
        int get_index();
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_darkest_secret();
        void    set_index(int);
        void    set_first_name(std::string);
        void    set_last_name(std::string);
        void    set_nickname(std::string);
        void    set_phone_number(std::string);
        void    set_darkest_secret(std::string);

};

#endif