#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#define GRADE_MAX 150
#define GRADE_MIN 1

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(std::string &name);
	Bureaucrat(std::string &name, size_t &grade);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	virtual ~Bureaucrat(void);

	std::string getName(void) const;
	size_t getGrade(void) const;
	void downGrade(void);
	void upGrade(void);

	void checkGradeException(void);

private:
	std::string _name;
	size_t _grade;

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
