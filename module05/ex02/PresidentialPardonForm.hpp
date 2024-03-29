#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	enum  e_status{
		GRADE_SIGNED = 25,
		GRADE_EXECUTE = 5
	};
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const &name);
	PresidentialPardonForm(PresidentialPardonForm const &cpy);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
	~PresidentialPardonForm(void);

	void execute(Bureaucrat const &executor) const;
};

#endif
