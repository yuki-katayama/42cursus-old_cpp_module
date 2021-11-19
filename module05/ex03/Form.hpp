#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
public:
	Form(void);
	Form(std::string const &name, int const signed_grade, int const excute_grade);
	Form(Form const &cpy);
	Form &operator=(Form const &rhs);
	virtual ~Form(void);

	std::string	const &getName(void) const;
	int			const &getSignedGrade(void) const;
	int			const &getExecuteGrade(void) const;
	bool		const &getSigned(void) const;

	void	beSigned(Bureaucrat const &bureaucrat);
	void	checkExecuteException(Bureaucrat const &executor);
	virtual void	execute(Bureaucrat const &executor) = 0;

private:
	std::string	const _name;
	int			const _signed_grade;
	int			const _execute_grade;
	bool		_signed;
	void		checkGradeException(void);
	class GradeTooHighException: public std::exception {
		public:
			GradeTooHighException();
			virtual char const *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		public:
			GradeTooLowException();
			virtual char const *what() const throw();
	};
	class NotSignedException: public std::exception {
		public:
			NotSignedException();
			virtual char const *what() const throw();
	};
};



std::ostream	&operator<<(std::ostream &output, Form const &rhs);

#endif
