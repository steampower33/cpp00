#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->idx = 0;
}

void PhoneBook::add()
{
	this->contact[this->idx % 8].AddContact();
	this->idx += 1;
}

void PhoneBook::DisplayStringRightAligned(std::string str)
{
	for (size_t i = 0; i < 10 - str.length(); i++)
		std::cout << " ";
	std::cout << str;
}

void PhoneBook::search()
{
	int number;

	if (this->idx == 0)
	{
		std::cout << "PhoneBook is Empty" << std::endl;
		return ;
	}
	std::cout << "|";
	this->DisplayStringRightAligned("index");
	std::cout << "|";
	this->DisplayStringRightAligned("first name");
	std::cout << "|";
	this->DisplayStringRightAligned("last name");
	std::cout << "|";
	this->DisplayStringRightAligned("nickname");
	std::cout << "|" << std::endl;
	for (int i = 0; i < this->idx; i++)
	{
		std::cout << "|" << "         " << i << "|";
		this->contact[i].DisplayContactWithDot();
	}
	number = -1;
	std::cout << "Choose the number of PhoneBook" << std::endl;
	std::cin >> number;
	if (std::cin.fail())
	{
		std::cout << "Please, enter the right number" << std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
		return ;
	}
	else if (!(0 <= number && number < 8 && number < this->idx))
	{
		std::cout << "Please, number is out of range" << std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
		return ;
	}
	this->contact[number].DisplayContactDetailed();
}