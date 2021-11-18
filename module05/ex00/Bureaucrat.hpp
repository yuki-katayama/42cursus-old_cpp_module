#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define GRADE_MAX 150
# define GRADE_MIN 1

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string &name);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);

		std::string	getName(void) const;
		size_t		getGrade(void) const;
		void		downGrade(void);
		void		upGrade(void);
	private:
		std::string	_name;
		size_t		_grade;
};

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &rhs);

#endif
