#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	idx = 0;
}

void PhoneBook::add()
{
	if (idx == 8)
		contact[7].AddContact();
	else
	{
		contact[idx % 8].AddContact();
		idx += 1;
	}
}

void PhoneBook::search()
{
	int number;

	if (idx == 0)
	{
		std::cout << "PhoneBook is Empty" << std::endl;
		return ;
	}
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < idx; i++)
	{
		std::cout << "|" << "         " << i << "|";
		contact[i].DisplayContactWithDot();
	}
	std::cout << "Choose the number of PhoneBook" << std::endl;
	std::cin >> number;
	if (std::cin.eof())
		return ;
	else if (!(0 <= number && number < 8))
	{
		std::cout << "Please, Enter the right index number" << std::endl;
		return ;
	}
	else if (number >= idx)
	{
		std::cout << "Please, Enter the exist index number" << std::endl;
		return ;
	}
	else if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(100, '\n');
		return ;
	}
	contact[number].DisplayContactDetailed();
}