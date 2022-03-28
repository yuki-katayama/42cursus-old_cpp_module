#include "span.hpp"

Span::Span(unsigned int max_amount)
	: _max_amount(max_amount)
{
}

Span::Span(Span const &cpy)
	: _max_amount(cpy._max_amount)
{
	this->_values.clear();
	this->_values = cpy._values;
}

Span &Span::operator=(Span const &rhs)
{
	this->_max_amount = rhs._max_amount;
	this->_values.clear();
	this->_values = rhs._values;
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->_values.size() < this->_max_amount)
	{
		this->_values.push_back(n);
	}
	else
	{
		throw Span::TooManyAmount();
	}
	std::sort(this->_values.begin(), this->_values.end());
}

unsigned int Span::shortestSpan(void) const
{
	if (this->_values.size() <= 1)
		throw Span::TooFewValues();

	unsigned int shortest = (static_cast<unsigned int>(this->_values[1]) - static_cast<unsigned int>(this->_values[0]));
	for (size_t i = 0; i < this->_values.size() - 1; i++)
	{
		unsigned int tmp = (static_cast<unsigned int>(this->_values[i + 1]) - static_cast<unsigned int>(this->_values[i]));
		if (tmp < shortest)
			shortest = tmp;
	}
	return (shortest < 0 ? shortest * -1 : shortest);
}

unsigned int Span::longestSpan(void) const
{
	if (this->_values.size() <= 1)
		throw Span::TooFewValues();
	unsigned int longest = *std::max_element(this->_values.begin(), this->_values.end()) - *std::min_element(this->_values.begin(), this->_values.end());
	return (longest < 0 ? longest * -1 : longest);
}

void Span::reset(unsigned int max_amount)
{
	this->_max_amount = max_amount;
	this->_values.clear();
}
