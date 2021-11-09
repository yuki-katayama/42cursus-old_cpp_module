#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

#define MAX_CONTACT 8
#define MAX_FIELD 10

class Contact {
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
	bool		_written;
	bool		_over_written;

public:
	Contact(const Contact &);
	Contact(void);
	~Contact();

	// setter
	void set_first_name(std::string _first_name);
	void set_last_name(std::string _last_name);
	void set_nickname(std::string _nickname);
	void set_phone_number(std::string _phone_number);
	void set_darkest_secret(std::string _darkest_secret);
	void set_written(bool _written);
	void set_over_written(bool _over_written);

	// getter
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_phone_number();
	std::string get_darkest_secret();
	bool		get_written();
	bool		get_over_written();

	void		inputData();
	void		printData();
};

#endif