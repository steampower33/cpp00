#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	std::string	cmd;
	PhoneBook	phone_book;

	while (true)
	{
		std::cout << "Please, Enter The Comamand : ADD or SEARCH or EXIT" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
			phone_book.add();
		else if (cmd == "SEARCH")
			phone_book.search();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Please, Enter The Right Command" << std::endl;
	}
	return 0;
}