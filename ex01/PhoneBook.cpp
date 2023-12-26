#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->idx = 0;
}

void PhoneBook::add()
{
	if (this->idx == 8)
		this->contact[7].AddContact();
	else
	{
		this->contact[this->idx % 8].AddContact();
		this->idx += 1;
	}
}

void PhoneBook::search()
{
	int number;

	if (this->idx == 0)
	{
		std::cout << "PhoneBook is Empty" << std::endl;
		return ;
	}
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < this->idx; i++)
	{
		std::cout << "|" << "         " << i << "|";
		this->contact[i].DisplayContactWithDot();
	}
	std::cout << "Choose the number of PhoneBook (0 ~ 7)" << std::endl;
	std::cin >> number;
	if (std::cin.eof())
		return ;
	else if (!(0 <= number && number < 8 && number < this->idx) || std::cin.fail())
	{
		std::cout << "Please, Enter the number (0 ~ 7)" << std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
		return ;
	}
	this->contact[number].DisplayContactDetailed();
}