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
	Form		*(*new_objects[NUM_FORM])(std::string &target) = {
		ShrubberyCreationForm::newObject,
		RobotomyRequestForm::newObject,
		PresidentialPardonForm::newObject
	};
	std::string	names[NUM_FORM] = {
		"ShrubberyCreation",
		"RobotomyRequest",
		"PresidentialPardon"
	};

	for (size_t i = 0; i < NUM_FORM; i++)
	{
		if (names[i] == name)
		{
			std::cout << "Intern creates " << name  << " form" << std::endl;
			return (new_objects[i](target));
		}
	}
	std::cout << "Intern failed to create " << name << " form" << std::endl;
	return NULL;
}
