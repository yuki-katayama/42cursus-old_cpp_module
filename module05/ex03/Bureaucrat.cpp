#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	: _name("default"),
	  _grade(GRADE_LOW_MAX)
{
}

Bureaucrat::Bureaucrat(std::string const &name)
	: _name(name),
	  _grade(GRADE_LOW_MAX)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int const grade)
	: _name(name),
	  _grade(grade)
{
	this->checkGradeException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::downGrade(void)
{
	this->_grade++;
	this->checkGradeException();
}

void Bureaucrat::upGrade(void)
{
	this->_grade--;
	this->checkGradeException();
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &rhs)
{
	output << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return output;
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << this->_name << " can't execute " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}

/* Exception */
void Bureaucrat::checkGradeException(void)
{
	if (this->_grade > GRADE_LOW_MAX)
	{
		this->_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	else if (this->_grade < GRADE_HIGH_MAX)
	{
		this->_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
:	std::exception()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException()
:	std::exception()
{}

char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: grade too high";
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: grade too low";
}
