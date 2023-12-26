#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phone_book;
	std::string	cmd;

	while (true)
	{
		std::cout << "Please, Enter The Comamand : ADD or SEARCH or EXIT" << std::endl;
		std::cin >> cmd;
		if (std::cin.eof())
		{
			std::cout << "EOF" << std::endl;
			break ;
		}
		if (cmd == "ADD")
			phone_book.add();
		else if (cmd == "SEARCH")
			phone_book.search();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Please, Enter The Right Command" << std::endl;
		if (std::cin.eof())
		{
			std::cout << "EOF" << std::endl;
			break ;
		}
	}
	return 0;
}