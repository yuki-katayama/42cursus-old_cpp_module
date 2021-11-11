#include "Karen.hpp"

Karen::~Karen( void )
{}

Karen::Karen( void )
:	_level(Karen::LEVEL_DEBUG)
{}

Karen::Karen( const std::string &level )
{
	this->_level = this->getLevelFromString(level);
}

Karen::each_level Karen::getLevelFromString( const std::string &level ) const
{
	if (level == "ERROR")
		return Karen::LEVEL_ERROR;
	else if (level == "WARNING")
		return Karen::LEVEL_WARNING;
	else if (level == "INFO")
		return Karen::LEVEL_INFO;
	else if (level == "DEBUG")
		return Karen::LEVEL_DEBUG;
	return Karen::LEVEL_INSIGNIFIC;
}

Karen::each_level &Karen::getLevel( void )
{
	return this->_level;
}


void Karen::complain( const Karen::each_level &level )
{
	switch(level) {
		case(Karen::LEVEL_DEBUG):
			this->debug();
		case(Karen::LEVEL_INFO):
			this->info();
		case(Karen::LEVEL_WARNING):
			this->warning();
		case(Karen::LEVEL_ERROR):
			this->error();
			break ;
		default:
			this->insignific();
			break;
	};
}

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl
		<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
		<< "I just love it!" << std::endl << std::endl;
}
void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl
		<< "I cannot believe adding extra bacon cost more money." << std::endl
		<< "You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}
void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl
		<< "I think I deserve to have some extra bacon for free." << std::endl
		<< "I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}
void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl
		<< "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}
void Karen::insignific( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
}
