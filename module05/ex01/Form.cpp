#include "Form.hpp"

Form::Form(void)
:	_name("default"),
	_signed_grade(0),
	_execute_grade(0),
	_signed(false)
{
	this->checkGradeException();
}

Form::Form(std::string const &name, int const signed_grade, int const execute_grade)
:	_name(name),
	_signed_grade(signed_grade),
	_execute_grade(execute_grade),
	_signed(false)
{
	this->checkGradeException();
}

Form::Form(Form const &cpy)
:	_name(cpy._name),
	_signed_grade(cpy._signed_grade),
	_execute_grade(cpy._execute_grade),
	_signed(false)
{
}

Form &Form::operator=(Form const &cpy)
{
	this->_signed = cpy._signed;
	return (*this);
}

Form::~Form(void)
{
}

std::string	const &Form::getName(void) const
{
	return (this->_name);
}


int	const &Form::getSignedGrade(void) const
{
	return (this->_signed_grade);
}

int	const &Form::getExecuteGrade(void) const
{
	return (this->_execute_grade);
}

bool	const &Form::getSigned(void) const
{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (this->_signed_grade >= bureaucrat.getGrade())
	{
		this->_signed = true;
		std::cout << bureaucrat.getName() << " signs " << this->getName() << std::endl;
	} else {
		throw Form::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &output, Form const &rhs)
{
	output << "name: " << rhs.getName() << "\n"
			<< "signedGrade: " << rhs.getSignedGrade() << "\n"
			<< "checkGrade: " << rhs.getExecuteGrade() << "\n"
			<< "signed: " << rhs.getSigned() << std::endl;
	return (output);
}

/* Exception */
void Form::checkGradeException(void)
{
	if (this->_signed_grade > GRADE_LOW_MAX || this->_execute_grade > GRADE_LOW_MAX)
		throw Form::GradeTooLowException();
	else if (this->_signed_grade < GRADE_HIGH_MAX || this->_execute_grade < GRADE_HIGH_MAX)
		throw Form::GradeTooHighException();
}

Form::GradeTooHighException::GradeTooHighException()
	: std::exception()
{
}

Form::GradeTooLowException::GradeTooLowException()
	: std::exception()
{
}

char const *Form::GradeTooHighException::what() const throw()
{
	return "Error: grade too high";
}

char const *Form::GradeTooLowException::what() const throw()
{
	return "Error: grade too low";
}
