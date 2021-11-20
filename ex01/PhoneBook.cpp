#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_contacts = new contact[8];
    this->_current_index = 0;
    this->_nb = 0;
}

void    PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nickname, 
                std::string phone_number, std::string darkest_secret)
{
    if (this->_current_index == 8)
        this->_current_index = 0;
    this->_contacts[_current_index].set_index(this->_current_index);
    this->_contacts[_current_index].set_first_name(first_name);
    this->_contacts[_current_index].set_last_name(last_name);
    this->_contacts[_current_index].set_nickname(nickname);
    this->_contacts[_current_index].set_phone_number(phone_number);
    this->_contacts[_current_index].set_darkest_secret(darkest_secret);
    if (this->_nb < 8)
        this->_nb++;
    this->_current_index++;
}

std::string PhoneBook::ft_trcuncate(std::string s) const
{
    if (s.length() > 10)
    {
        s.resize(9);
        s.append(".");
    }
    return (s);
}

void    PhoneBook::show_contacts() const
{
   std::cout << std::setw(10) << "index" << "|";
   std::cout << std::setw(10) << "first name" << "|";
   std::cout << std::setw(10) << "last name" << "|";
   std::cout << std::setw(10) << "nickname" << std::endl;
   for (int i = 0; i < this->_nb ; i++)
   {
       std::cout << std::setw(10) << this->_contacts[i].get_index() << "|";
       std::cout << std::setw(10) << ft_trcuncate(this->_contacts[i].get_first_name()) << "|";
       std::cout << std::setw(10) << ft_trcuncate(this->_contacts[i].get_last_name()) << "|";
       std::cout << std::setw(10) << ft_trcuncate(this->_contacts[i].get_nickname()) << std::endl;
   }
   std::cout << std::endl;
}

void    PhoneBook::show_contact(int index) const
{
    if (index >= this->_nb || index < -1)
        std::cout << "\nNo Number Found with " << index << std::endl;
    else
    {
        std::cout << "\nfirst name : " << this->_contacts[index].get_first_name() << std::endl;
        std::cout << "last name : " << this->_contacts[index].get_last_name() << std::endl;
        std::cout << "nickname : " << this->_contacts[index].get_nickname() << std::endl;
        std::cout << "phone_number : " << this->_contacts[index].get_phone_number() << std::endl;
        std::cout << "darkest_secret : " << this->_contacts[index].get_darkest_secret() << std::endl;
        std::cout << std::endl;
    }
}

void    PhoneBook::set_info_contact()
{
    std::string first_name, last_name, nickname, phone_number, darkest_secret;
    std::cout << "\nfirst name = "; std::getline(std::cin, first_name);
    std::cout << "last name = "; std::getline(std::cin, last_name);
    std::cout << "nickname = "; std::getline(std::cin, nickname);
    std::cout << "phone_number = "; std::getline(std::cin, phone_number);
    std::cout << "darkest_secret = "; std::getline(std::cin, darkest_secret);
    add_contact(first_name, last_name, nickname, phone_number, darkest_secret);
    std::cout << "\nContact Add Successfully !\n" << std::endl;
}