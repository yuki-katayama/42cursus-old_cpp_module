#include "Contact.hpp"

Contact::Contact(const Contact& cp)
:	_first_name(cp._first_name),
	_last_name(cp._last_name),
	_nickname(cp._nickname),
	_phone_number(cp._phone_number),
	_darkest_secret(cp._darkest_secret),
	_written(cp._written)
{}

Contact::Contact(void)
{
	this->_first_name = (char)0;
	this->_last_name = (char)0;
	this->_nickname = (char)0;
	this->_phone_number = (char)0;
	this->_darkest_secret = (char)0;
	this->_written = false;
}

Contact::~Contact(void)
{
}

// setter
void Contact::set_first_name(const std::string _first_name)
{
	this->_first_name = _first_name;
}
void Contact::set_last_name(const std::string _last_name)
{
	this->_last_name = _last_name;
}
void Contact::set_nickname(const std::string _nickname)
{
	this->_nickname = _nickname;
}
void Contact::set_phone_number(const std::string _phone_number)
{
	this->_phone_number = _phone_number;
}
void Contact::set_darkest_secret(const std::string _darkest_secret)
{
	this->_darkest_secret = _darkest_secret;
}
void Contact::set_written(bool _written)
{
	this->_written = _written;
}
void Contact::set_over_written(bool _over_written)
{
	this->_over_written = _over_written;
}

// getter
std::string Contact::get_first_name()
{
	return this->_first_name;
}
std::string Contact::get_last_name()
{
	return this->_last_name;
}
std::string Contact::get_nickname()
{
	return this->_nickname;
}
std::string Contact::get_phone_number()
{
	return this->_phone_number;
}
std::string Contact::get_darkest_secret()
{
	return this->_darkest_secret;
}

bool Contact::get_written()
{
	return this->_written;
}
bool Contact::get_over_written()
{
	return this->_over_written;
}

void Contact::inputData()
{
	std::cout << "first name : ";
	std::getline(std::cin, this->_first_name);
	std::cout << "last name : ";
	std::getline(std::cin, this->_last_name);
	std::cout << "nick name : ";
	std::getline(std::cin, this->_nickname);
	std::cout << "phone number : ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "password : ";
	std::getline(std::cin, this->_darkest_secret);
	this->_written = true;
}

void Contact::printData()
{
	std::cout << "first name: " << this->_first_name << std::endl;
	std::cout << "last name: " << this->_last_name << std::endl;
	std::cout << "nickname " << this->_nickname << std::endl;
	std::cout << "phone number: " << this->_phone_number << std::endl;
	std::cout << "darkest secret: " << this->_darkest_secret << std::endl;
}