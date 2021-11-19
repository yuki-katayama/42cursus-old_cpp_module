#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	enum  e_status{
		GRADE_SIGNED = 72,
		GRADE_EXCUTE = 45
	};
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const &name);
	RobotomyRequestForm(Form const &cpy);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm(void);

	void execute(Bureaucrat const &executor);
};

#endif
