#include "Contact.hpp"

void Contact::AddContact(void)
{
	std::cout << "Enter The First Name : ";
	std::cin >> first_name;
	if (std::cin.eof())
		return ;
	std::cout << "Enter The Last Name : ";
	std::cin >> last_name;
	if (std::cin.eof())
		return ;
	std::cout << "Enter The Nick Name : ";
	std::cin >> nick_name;
	if (std::cin.eof())
		return ;
	std::cout << "Enter The Phone Number : ";
	std::cin >> phone_number;
	if (std::cin.eof())
		return ;
	std::cout << "Enter The Darkest Secret : ";
	std::cin >> darkest_secret;
	if (std::cin.eof())
		return ;
}

void Contact::DisplayContactWithDot()
{
	int	length;

	length = static_cast<int>(first_name.length());
	if (length >= 10)
		std::cout << first_name.substr(0, 9) + "." + "|";
	else
	{
		for (int i = 0; i < 10 - length; i++)
			std::cout << " ";
		for (int i = 0; i < length; i++)
			std::cout << first_name[i];
		std::cout << "|";
	}
	length = static_cast<int>(last_name.length());
	if (length >= 10)
		std::cout << last_name.substr(0, 9) + "." + "|";
	else
	{
		for (int i = 0; i < 10 - length; i++)
			std::cout << " ";
		for (int i = 0; i < length; i++)
			std::cout << last_name[i];
		std::cout << "|";
	}
	length = static_cast<int>(nick_name.length());
	if (length >= 10)
		std::cout << nick_name.substr(0, 9) + "." + "|";
	else
	{
		for (int i = 0; i < 10 - length; i++)
			std::cout << " ";
		for (int i = 0; i < length; i++)
			std::cout << nick_name[i];
		std::cout << "|";
	}
	std::cout << std::endl;
}

void Contact::DisplayContactDetailed(void)
{
	std::cout << "first name : " << first_name << std::endl;
	std::cout << "last name : " << last_name << std::endl;
	std::cout << "nick name : " << nick_name << std::endl;
	std::cout << "phone number : " << phone_number << std::endl;
	std::cout << "darkest secret : " << darkest_secret << std::endl;
}