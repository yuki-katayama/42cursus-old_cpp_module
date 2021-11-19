#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void test_bureauCrat(void)
{
	Bureaucrat a;
	std::cout << "-----初期値-----" << std::endl;
	std::cout << a << std::endl
			  << std::endl;
	a.upGrade();
	std::cout << "-----upGrade called-----" << std::endl;
	std::cout << a << std::endl
			  << std::endl;
	std::cout << "-----downGrade call throw-----" << std::endl;
	try
	{
		a.downGrade();
		a.downGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl
				  << std::endl;
	}
	std::cout << "-----upGrade * 150 call throw-----" << std::endl;
	try
	{
		for (int i = 0; i < GRADE_LOW_MAX; i++)
		{
			a.upGrade();
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl
				  << std::endl;
	}
	std::cout << "-----After upGrade-----" << std::endl;
	std::cout << a << "\n\n"
			  << std::endl;
}

void	test_form(std::string form_name, Form *f, int bure_grade)
{
	Bureaucrat b = Bureaucrat("bure", bure_grade);
	std::cout << "----- " << form_name << " エラー　-----" << std::endl;
	try
	{
		f->execute(b);
	}
	catch (std::exception &e)
	{
		f->beSigned(b);
		b.downGrade();
		std::cout << e.what() << std::endl;
	}
	try {
		f->execute(b);
	} catch (std::exception &e) {
		b.upGrade();
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----- " << form_name << " 通常 -----" << std::endl;
	f->execute(b);
	std::cout << std::endl;
	delete f;
}

void	test_intern(void)
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("RobotomyRequest", "test");
	delete rrf;
	rrf = someRandomIntern.makeForm("a", "test");
	delete rrf;
}

int main(void)
{
	std::cout << "************* Bureaucrat ************" << std::endl;
	test_bureauCrat();
	std::cout << "************* Form **************" << std::endl;
	test_form("ShrubberyCreationForm", new ShrubberyCreationForm("ShrubberyCreationForm"), 137);
	test_form("RobotomyRequestForm", new RobotomyRequestForm("RobotomyRequestForm"), 45);
	test_form("PresidentialPardonForm", new PresidentialPardonForm("PresidentialPardonForm"), 5);
	std::cout << "************* Intern ************" << std::endl;
	test_intern();
	// while(1){}
}
