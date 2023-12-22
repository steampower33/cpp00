#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
public:
	void AddContact(void);
	void DisplayContactWithDot(void);
	void DisplayContactDetailed(void);
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
};

#endif