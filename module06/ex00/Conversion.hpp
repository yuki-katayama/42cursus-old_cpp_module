#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <exception>
# include <sstream>
# include <iostream>
#include <limits>

class Conversion
{
public:
	Conversion(void);
	Conversion(std::string const &str);
	Conversion(Conversion const &src);
	Conversion &operator=(Conversion const &rhs);
	~Conversion(void);
	operator char(void) const;
	operator int(void) const;
	operator float(void) const;
	operator double(void) const;

private:
	std::string _str;
	void	checkNanException(void) const;
	void	checkNonDisplayException(void) const;
	void	formatInputString(void);
	bool	checkOtherException(void) const;
	bool	endsWith(const std::string& str, const std::string& suffix) const;
	class NonDisplayException : public std::exception
	{
	public:
		NonDisplayException(void);
		virtual char const *what() const throw();
	};
	class NanException : public std::exception
	{
	public:
		NanException(void);
		virtual char const *what() const throw();
	};
	class OtherException : public std::exception
	{
	public:
		OtherException(void);
		virtual char const *what() const throw();
	};
};

#endif
