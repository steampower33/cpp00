#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->idx = 0;
}

void PhoneBook::add()
{
	this->contact[idx / 8].AddContact();
	this->idx++;
}

void PhoneBook::DisplayStringRightAligned(std::string str)
{
	for (size_t i = 0; i < 10 - str.length(); i++)
		std::cout << " ";
	std::cout << str;
}

void PhoneBook::search()
{
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
}