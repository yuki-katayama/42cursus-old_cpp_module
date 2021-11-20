#include "Conversion.hpp"

Conversion::Conversion(void)
{
}

Conversion::Conversion(std::string const &str)
	: _str(str)
{
	this->formatInputString();
}

Conversion::Conversion(Conversion const &src)
{
	*this = src;
}

Conversion::~Conversion(void)
{
}

Conversion &Conversion::operator=(Conversion const &rhs)
{
	(void)rhs;
	return (*this);
}

Conversion::operator char(void) const
{
	int num;

	this->checkNanException();
	std::istringstream _iss(this->_str);
	_iss >> num;
	if (num < ' ' || num > '~')
		throw NonDisplayException();
	this->checkOtherException();
	return (static_cast<char>(num));
}

Conversion::operator int(void) const
{
	int num;

	this->checkNanException();
	std::istringstream _iss(this->_str);
	_iss >> num;
	this->checkOtherException();
	return (num);
}

Conversion::operator float(void) const
{
	float num;
	std::istringstream _iss(this->_str);
	_iss >> num;
	this->checkOtherException();
	return (num);
}

Conversion::operator double(void) const
{
	double num;
	std::istringstream _iss(this->_str);
	_iss >> num;
	this->checkOtherException();
	return (num);
}

void Conversion::checkNanException(void) const
{
	if (this->_str == "nan" || this->_str == "-nan" || this->_str == "+nan")
		throw NanException();
	if (this->_str == "inf" || this->_str == "-inf" || this->_str == "+inf")
		throw NanException();
}

bool checkString(char c, int &flg)
{
	if (c == '.' && !(flg & (1 << 0)))
	{
		flg = flg | (1 << 0);
		return true;
	}
	if (c == '+' && !(flg & (1 << 1)))
	{
		flg = flg | (1 << 1);
		return true;
	}
	if (c == '-' && !(flg & (1 << 2)))
	{
		flg = flg | (1 << 2);
		return (true);
	}
	return (false);
}

bool Conversion::checkOtherException(void) const
{
	size_t i = -1;
	int flg = 0;
	while (this->_str[++i])
	{
		if (checkString(this->_str[i], flg))
			continue;
		if (!(this->_str[i] >= '0' && this->_str[i] <= '9'))
			throw OtherException();
	}
	return (false);
}

bool Conversion::endsWith(const std::string &str, const std::string &suffix) const
{
	size_t len1 = str.size();
	size_t len2 = suffix.size();
	return len1 >= len2 && str.compare(len1 - len2, len2, suffix) == 0;
}

void Conversion::formatInputString(void)
{
	if (!(this->endsWith(this->_str, "inf")) && !(this->endsWith(this->_str, "inff")) && this->_str[this->_str.length() - 1] == 'f')
		this->_str[this->_str.length() - 1] = 0;
}

Conversion::NonDisplayException::NonDisplayException(void)
	: std::exception()
{
}

char const *Conversion::NonDisplayException::what() const throw()
{
	return "Non displayable";
}

Conversion::NanException::NanException(void)
	: std::exception()
{
}

char const *Conversion::NanException::what() const throw()
{
	return "impossible";
}

Conversion::OtherException::OtherException(void)
	: std::exception()
{
}

char const *Conversion::OtherException::what() const throw()
{
	return "input error";
}
