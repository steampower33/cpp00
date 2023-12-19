#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	void DisplayStringRightAligned(std::string str);
	void add(void);
	void search(void);
private:
	Contact contact[8];
	int		idx;
};

#endif