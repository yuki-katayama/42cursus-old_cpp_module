#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
:	_name("default"),
	_grade(150)
{}

Bureaucrat::Bureaucrat(std::string &name)
:	_name(name),
	_grade(150)
{}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{}


std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

size_t	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::downGrade(void)
{
	if(this->_grade + 1 > GRADE_MAX)
		throw std::runtime_error("Error: too lower Grade");
	this->_grade++;
}

void	Bureaucrat::upGrade(void)
{
	if ( this->_grade - 1 < GRADE_MIN)
		throw std::runtime_error("Error: too higher Grade");
	this->_grade--;
}

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &rhs)
{
	output << "name: " << rhs.getName() << std::endl;
	output << "grade: " << rhs.getGrade();
	return output;
}
