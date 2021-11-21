#include "Data.hpp"

Data::Data(int value)
: _value(value)
{
  return ;
}

int			Data::getValue(void) const
{
	return (this->_value);
}
