#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	void add(void);
	void search(void);
private:
	Contact contact[8];
	int		idx;
};

#endif