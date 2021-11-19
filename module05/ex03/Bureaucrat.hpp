#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#define GRADE_LOW_MAX 150
#define GRADE_HIGH_MAX 1
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(std::string const &name);
	Bureaucrat(std::string const &name, int const grade);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	~Bureaucrat(void);

	std::string getName(void) const;
	int getGrade(void) const;
	void downGrade(void);
	void upGrade(void);

	void checkGradeException(void);
	void executeForm(Form const & form);


private:
	std::string const	_name;
	int					_grade;

	/* 例外クラス */
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		virtual char const *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		virtual char const *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &rhs);

#endif
