#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void)
{}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern(void)
{}

Form	*Intern::makeForm(std::string name, std::string target)
{
	if (name == "ShrubberyCreation")
	{
		std::cout << "Intern creates " << name  << " form" << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (name == "RobotomyRequest")
	{
		std::cout << "Intern creates " << name  << " form" << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (name == "PresidentialPardon")
	{
		std::cout << "Intern creates " << name  << " form" << std::endl;
		return (new PresidentialPardonForm(target));
	}
	std::cout << "Intern failed to create " << name << " form" << std::endl;
	return NULL;
}
