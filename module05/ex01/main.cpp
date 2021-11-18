#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "************* Bureaucrat ************" << std::endl;
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
	std::cout << "************* Form **************" << std::endl;
	std::cout << "-----例外-----" << std::endl;
	try
	{
		Form f;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n"
				  << std::endl;
	}
	try
	{
		Form f = Form("test", 150, 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n"
				  << std::endl;
	}
	std::cout << "-----通常-----" << std::endl;
	Form f = Form("test", 100, 50);
	Bureaucrat b = Bureaucrat("bure", 101);
	f.beSigned(b);
	b.upGrade();
	f.beSigned(b);
	std::cout << std::endl;
	std::cout << "-----フォームステータス-----" << std::endl;
	std::cout << f << std::endl;
}
