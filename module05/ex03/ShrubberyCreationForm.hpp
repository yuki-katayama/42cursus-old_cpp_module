#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	enum e_status
	{
		GRADE_SIGNED = 145,
		GRADE_EXECUTE = 137
	};
	ShrubberyCreationForm(std::string const &name);
	ShrubberyCreationForm(Form const &cpy);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
	~ShrubberyCreationForm(void);

	void execute(Bureaucrat const &executor) const;
	static	Form	*newObject(std::string &target);

private:
	ShrubberyCreationForm(void);
	class FileErrorException : public std::exception
	{
	public:
		FileErrorException();
		virtual char const *what() const throw();
	};
};

#endif
