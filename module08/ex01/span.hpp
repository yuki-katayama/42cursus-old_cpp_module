#include <vector>
#include <iostream>

class Span
{
public:
	Span(unsigned int max_amount);
	Span(Span const &cpy);
	Span &operator=(Span const &rhs);
	void addNumber(int n);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
	void reset(unsigned int max_amount);

private:
	Span(void);
	unsigned int _max_amount;
	std::vector<int> _values;

	class TooManyAmount : public std::exception
	{
		virtual const char *what() const throw() { return ("\033[31m Too Many Amount.\033[m"); }
	};

	class TooFewValues : public std::exception
	{
		virtual const char *what() const throw() { return ("\033[31m Too Few Values. Please set two or more values\033[m"); }
	};
};
