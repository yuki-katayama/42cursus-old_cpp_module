#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: Form("PresidentialPardonForm", GRADE_SIGNED, GRADE_EXECUTE)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: Form(target, GRADE_SIGNED, GRADE_EXECUTE)
{
}

PresidentialPardonForm::PresidentialPardonForm(Form const &target)
	: Form(target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void)rhs;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	this->execute(executor);
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
