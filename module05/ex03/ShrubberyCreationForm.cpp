#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form("ShrubberyCreationForm", GRADE_SIGNED, GRADE_EXECUTE)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form(target, GRADE_SIGNED, GRADE_EXECUTE)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &target)
	: Form(target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	(void)rhs;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::string file_name = this->getName() + "_shrubbery";
	std::ofstream ofs(file_name);

	if (ofs.fail())
		throw FileErrorException();
	ofs << "                                                    " << std::endl
		<< "                                                    " << std::endl
		<< "             _{'\\ _{\\{\\/}/}/}__                  " << std::endl
		<< "           {/{/\\}{/{/\\}(\\}{/\\} _                " << std::endl
		<< "         {/{/\\}{/{/\\}(_)\\}{/{/\\}  _             " << std::endl
		<< "       {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}       " << std::endl
		<< "      {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}             " << std::endl
		<< "     _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}             " << std::endl
		<< "    {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}       " << std::endl
		<< "     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}       " << std::endl
		<< "    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}      " << std::endl
		<< "     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}     " << std::endl
		<< "      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)     " << std::endl
		<< "     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}     " << std::endl
		<< "      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}      " << std::endl
		<< "        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}       " << std::endl
		<< "         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)         " << std::endl
		<< "           {/{/{\\{\\/}{/{\\{\\{\\(_)/}             " << std::endl
		<< "            {/{\\{\\{\\/}/}{\\{\\\\}/}              " << std::endl
		<< "             {){/ {\\/}{\\/} \\}\\}                 " << std::endl
		<< "             (_)  \\.-'.-/                          " << std::endl
		<< "         __...--- |'-.-'| --...__                   " << std::endl
		<< "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__        " << std::endl
		<< "-\"    ' .  . '    |.\'-._| '  . .  '               " << std::endl
		<< ".  \'-  \'    .--\'  | '-.'|    .  '  . '           " << std::endl
		<< "         ' ..     |'-_.-|                           " << std::endl
		<< " .  '  .       _.-|-._ -|-._  .  '  .               " << std::endl
		<< "             .'   |'- .-|   '.                      " << std::endl
		<< " ..-'   ' .  '.   `-._.-´   .'  '  - .              " << std::endl
		<< "  .-' '        '-._______.-'     '  .               " << std::endl
		<< "       .      ~,                                    " << std::endl
		<< "   .       .        .    ' '-.                      " << std::endl
		<< "                                                    " << std::endl
		<< "------------------------------------------------    " << std::endl
		<< "Thank you for visiting https://asciiart.website/    " << std::endl
		<< "This ASCII pic can be found at                      " << std::endl
		<< "https://asciiart.website/index.php?art=plants/trees " << std::endl;

	ofs.close();
	std::cout << "make " << file_name << std::endl;
}

Form *ShrubberyCreationForm::newObject(std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

ShrubberyCreationForm::FileErrorException::FileErrorException()
	: std::exception()
{
}

char const *ShrubberyCreationForm::FileErrorException::what() const throw()
{
	return "Error: can't create file";
}
