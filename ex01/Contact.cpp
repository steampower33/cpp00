#include "Contact.hpp"

void Contact::AddContact(void)
{
	std::cout << "Enter The First Name : ";
	std::cin >> this->first_name;
	if (std::cin.eof())
		return ;
	std::cout << "Enter The Last Name : ";
	std::cin >> this->last_name;
	if (std::cin.eof())
		return ;
	std::cout << "Enter The Nick Name : ";
	std::cin >> this->nick_name;
	if (std::cin.eof())
		return ;
	std::cout << "Enter The Phone Number : ";
	std::cin >> this->phone_number;
	if (std::cin.eof())
		return ;
	std::cout << "Enter The Darkest Secret : ";
	std::cin >> this->darkest_secret;
	if (std::cin.eof())
		return ;
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
		std::cout << this->last_name.substr(0, 9) + "." + "|";
	else
	{
		for (int i = 0; i < 10 - length; i++)
			std::cout << " ";
		for (int i = 0; i < length; i++)
			std::cout << this->last_name[i];
		std::cout << "|";
	}
	length = static_cast<int>(this->nick_name.length());
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