#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "contact.hpp"

class PhoneBook {

    private :
        contact *_contacts;
        int _nb;
        int _current_index;

    public :
        PhoneBook();
        void    add_contact(std::string, std::string, std::string, std::string, std::string);
        std::string ft_trcuncate(std::string) const;
        void    show_contact(int) const;
        void    show_contacts() const;
        void    set_info_contact();

};

#endif
