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

std::string gen_random(int len)
{
	std::string s;
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < len; ++i)
	{
		s += alphanum[rand() % (sizeof(alphanum) - 1)];
	}

	return s;
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::string file_name = this->getName() + "_shrubbery";
	std::ofstream ofs(file_name);
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
