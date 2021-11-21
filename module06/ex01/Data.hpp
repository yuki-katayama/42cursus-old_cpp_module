#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data {
	public:
		Data (int value);
		int			getValue() const;
	private:
		Data (void);
	  int _value;
};

#endif
