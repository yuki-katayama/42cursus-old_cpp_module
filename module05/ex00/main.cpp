#include "Bureaucrat.hpp"



int main(void)
{
	Bureaucrat a;
	std::cout << "-----初期値-----" << std::endl;
	std::cout << a << std::endl << std::endl;
	a.upGrade();
	std::cout << "-----upGrade called-----" << std::endl;
	std::cout << a << std::endl << std::endl;
	std::cout << "-----downGrade call throw-----" << std::endl;
	try {
		a.downGrade();
		a.downGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << "-----upGrade * 150 call throw-----" << std::endl;
	try {
		for (int i = 0; i < GRADE_LOW_MAX; i++) {
			a.upGrade();
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << "-----After upGrade-----" << std::endl;
	std::cout << a << std::endl << std::endl;

	// while(1){}
}
