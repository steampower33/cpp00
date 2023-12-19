#include "Contact.hpp"

void Contact::AddContact(void)
{
	std::cout << "Enter The First Name : ";
	std::cin >> this->first_name;
	std::cout << "Enter The Last Name : ";
	std::cin >> this->last_name;
	std::cout << "Enter The Nick Name : ";
	std::cin >> this->nick_name;
	std::cout << "Enter The Phone Number : ";
	std::cin >> this->phone_number;
	std::cout << "Enter The Darkest Secret : ";
	std::cin >> this->darkest_secret;
}

void Contact::DisplayContactWithDot(void)
{
	for (size_t i = 0; i < 10 - this->first_name.length(); i++)
		std::cout << " ";
	for (size_t i = 0; i < this->first_name.length(); i++)
		std::cout << this->first_name[i];
	std::cout << std::endl;
}
