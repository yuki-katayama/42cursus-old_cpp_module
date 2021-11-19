#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include <iostream>

#define NUM_FORM 3

class Intern {
	public:
		Intern(void);
		Intern(Intern const &src);
		Intern &operator=(Intern const &rhs);
		~Intern(void);
		Form	*makeForm(std::string name, std::string target);
};

typedef struct s_form {
	std::string	const name;
	Form		*form;
}				t_form;

#endif

