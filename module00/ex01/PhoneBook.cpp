#include "Contact.hpp"
#include <iomanip>

int ft_empty(Contact (&contacts)[MAX_CONTACT])
{
	int	i;

	for(i = 0; i < MAX_CONTACT; i++)
	{
		if (contacts[i].get_written() == false)
			break ;
		if (contacts[i].get_over_written())
		{
			contacts[i].set_over_written(false);
			contacts[(i + 1) % MAX_CONTACT].set_over_written(true);
			break ;
		}
	}
	if(i == MAX_CONTACT)
	{
		contacts[1].set_over_written(true);
		return (0);
	}
	return (i);
}

void ft_add(Contact (&contacts)[MAX_CONTACT])
{
	int access_i;

	access_i = ft_empty(contacts);
	contacts[access_i].inputData();
}

std::string ft_format(std::string str)
{
	if (str.size() < MAX_FIELD + 1)
		return (str);
	str[MAX_FIELD - 1] = '.';
	str = str.substr(0, MAX_FIELD);
	return str;
}

bool ft_valid_range(char c)
{
	if ((int)c >= (int)'0' && (int)c <= (MAX_CONTACT - 1) + 48)
		return (true);
	return (false);
}

void ft_search(Contact (&contacts)[MAX_CONTACT])
{
	int i = 0;
	std::string show_index_str;
	int show_index;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < MAX_CONTACT)
	{
		if (contacts[i].get_written() == false)
			break ;
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << '|';
		std::cout << std::setw(10);
		std::cout << ft_format(contacts[i].get_first_name());
		std::cout << '|';
		std::cout << std::setw(10);
		std::cout << ft_format(contacts[i].get_last_name());
		std::cout << '|';
		std::cout << std::setw(10);
		std::cout << ft_format(contacts[i].get_nickname());
		std::cout << std::endl;
		i++;
	};

	while(1)
	{
		std::cout << "Please input Index: ";
		std::getline(std::cin, show_index_str);
		show_index = atoi(show_index_str.c_str());
		if (show_index_str.size() == 1 && ft_valid_range(show_index_str[0]) && contacts[show_index].get_written())
			break;
		else
			std::cout << "Error: Not Input Index";
	}
	contacts[show_index].printData();
}

int main(void)
{
	Contact contacts[MAX_CONTACT];

	while(1)
	{
		std::cout << "PhoneBook : ADD | SEARCH | EXIT" << std::endl;
		std::string in;
		std::getline(std::cin, in);
		if (in == "EXIT" || std::cin.eof())
			return (0);
		else if (in == "ADD")
			ft_add(contacts);
		else if (in == "SEARCH" && contacts[0].get_written() == true)
			ft_search(contacts);
	}
	return (0);
}