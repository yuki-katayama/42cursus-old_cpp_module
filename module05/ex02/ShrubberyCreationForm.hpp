#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	enum  e_status{
		GRADE_SIGNED = 145,
		GRADE_EXECUTE = 137
	};
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const &name);
	ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
	~ShrubberyCreationForm(void);

	void execute(Bureaucrat const &executor) const;
};

#endif
