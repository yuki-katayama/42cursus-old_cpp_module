#include <iostream>
#include <string>

static void ft_putchar(const char c)
{
	std::cout << c;
}

static void ft_putstr(const char *str)
{
	std::cout << str;
}

static char ft_upper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return c;
}

static int ft_strlen(const char *str)
{
	int len;

	len = -1;
	while(str[++len])
	;
	return (len);
}

int main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putstr("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	else
	{
		for (int i = 1; i < argc; i++)
			for (int j = 0; j < ft_strlen(argv[i]); j++)
				ft_putchar(ft_upper(argv[i][j]));
	}
	std::cout << std::endl;
	return (0);
}