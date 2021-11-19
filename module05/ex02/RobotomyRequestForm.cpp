#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: Form("RobotomyRequestForm", GRADE_SIGNED, GRADE_EXCUTE)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
	: Form(target, GRADE_SIGNED, GRADE_EXCUTE)
{
}

RobotomyRequestForm::RobotomyRequestForm(Form const &target)
	: Form(target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->checkExecuteException(executor);
	srand(time(NULL));
	if ((rand() % 10) < 5)
		std::cout << "ding dong, rrrriiinngggg, gong, clang" << std::endl;
	else
		std::cout << "...failure." << std::endl;
}
