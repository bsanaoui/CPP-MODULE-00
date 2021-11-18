#include "contact.hpp"

contact::contact()
{
    this->_index = -1;
    this->_first_name = "Unkown";
    this->_last_name = "Unkown";
    this->_nickname = "Unkown";
    this->_phone_number = "Unkown";
    this->_darkest_secret = "Unkown";
}

int contact::get_index()
{
    return (this->_index);
}

std::string contact::get_first_name()
{
    return (this->_first_name);
}

std::string contact::get_last_name()
{
    return (this->_last_name);
}

std::string contact::get_nickname()
{
    return (this->_nickname);
}

std::string contact::get_phone_number()
{
    return (this->_phone_number);
}

std::string contact::get_darkest_secret()
{
    return (this->_darkest_secret);
}

void    contact::set_index(int index)
{
    this->_index = index;
}

void    contact::set_first_name(std::string first_name)
{
    this->_first_name = first_name;
}

void    contact::set_last_name(std::string last_name)
{
    this->_last_name = last_name;
}

void    contact::set_nickname(std::string nickname)
{
    this->_nickname = nickname;
}

void    contact::set_phone_number(std::string phone_number)
{
    this->_phone_number = phone_number;
}

void    contact::set_darkest_secret(std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
}
