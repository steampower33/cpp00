#include "Contact.hpp"

void Contact::AddContact(void)
{
	std::cout << "Enter The First Name : ";
	std::getline(std::cin, this->first_name);
	if (std::cin.fail() || std::cin.eof())
	{
		return ;
	}
	std::cout << "Enter The Last Name : ";
	std::getline(std::cin, this->last_name);
	std::cout << "Enter The Nick Name : ";
	std::getline(std::cin, this->nick_name);
	std::cout << "Enter The Phone Number : ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Enter The Darkest Secret : ";
	std::getline(std::cin, this->darkest_secret);
}

void Contact::DisplayContactWithDot()
{
	int	length;

	length = static_cast<int>(this->first_name.length());
	if (length >= 10)
		std::cout << this->first_name.substr(0, 9) + "." + "|";
	else
	{
		for (int i = 0; i < 10 - length; i++)
			std::cout << " ";
		for (int i = 0; i < length; i++)
			std::cout << this->first_name[i];
		std::cout << "|";
	}
	length = static_cast<int>(this->last_name.length());
	if (length >= 10)
		std::cout << this->first_name.substr(0, 9) + "." + "|";
	else
	{
		for (int i = 0; i < 10 - length; i++)
			std::cout << " ";
		for (int i = 0; i < length; i++)
			std::cout << this->last_name[i];
		std::cout << "|";
	}
	length = static_cast<int>(this->last_name.length());
	if (length >= 10)
		std::cout << this->nick_name.substr(0, 9) + "." + "|";
	else
	{
		for (int i = 0; i < 10 - length; i++)
			std::cout << " ";
		for (int i = 0; i < length; i++)
			std::cout << this->nick_name[i];
		std::cout << "|";
	}
	std::cout << std::endl;
}

void Contact::DisplayContactDetailed(void)
{
	std::cout << "first name : " << this->first_name << std::endl;
	std::cout << "last name : " << this->last_name << std::endl;
	std::cout << "nick name : " << this->nick_name << std::endl;
	std::cout << "phone number : " << this->phone_number << std::endl;
	std::cout << "darkest secret : " << this->darkest_secret << std::endl;
}