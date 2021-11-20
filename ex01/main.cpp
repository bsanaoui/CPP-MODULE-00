#include "PhoneBook.hpp"

bool isNumber(const std::string str)
{
    if (str == "")
        return (false); 
    for(int i = 0 ; i < str.length() ; i++)
        if (std::isdigit(str[i]) == 0) return (false);
    return (true);
}

void    displayHeader()
{
    std::cout << std::setw(50) << " ---------- Welcome To Your PhoneBook ---------" << "\n\n"   <<std::endl;
    std::cout << " /**************/ Type 'ADD' to add a contact /**************/\n" << std::endl;
    std::cout << " /***********/ Type 'EXIT' to quit the program /*************/\n" << std::endl;
    std::cout << " /***/ Type 'SEARCH' to display information of a contact /***/" << "\n\n" << std::endl;
}

int main()
{
    PhoneBook *phone_book = new PhoneBook();
    std::string input;
    displayHeader();
    while (1)
    {
        std::cout << "PhoneBook > ";
        std::getline(std::cin, input);
        if (!input.compare("EXIT"))
        {
            delete phone_book;
            break ;
        }
        else if (!input.compare("ADD"))
            phone_book->set_info_contact();
        else if (!input.compare("SEARCH"))
        {
            phone_book->show_contacts();
            std::cout << "Enter The Index Of Contact You Want" << std::endl;
            do
            {   
                std::cout << "Index = ";
                std::getline(std::cin, input);
                if (!isNumber(input))
                    std::cout << "Please Enter A Valid Number !!" << std::endl;
            } while (!isNumber(input));
            phone_book->show_contact(std::stoi(input));
        }
        else
            std::cout << "PLEASE ENTER A VALID COMMANDS (ADD, EXIT, SEARCH)!!\n" << std::endl;
    }
    return (0);
}