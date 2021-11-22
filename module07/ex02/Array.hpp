#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <string>

template <typename T>
class Array {
	public:
		Array(void)
		:	_array(NULL),
			_size(0) {};
		Array(unsigned int n)
		:	_array(new T[n]),
			_size(n) {};
		Array(Array const &copy) {
			this->_size = copy._size;
			this->_array = new T[copy._size];
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = copy[i];
		}
		Array &operator=(Array const &copy) {
			if (this->_size != 0) {
				delete [] this->_array;
			}
			this->_size = copy._size;
			this->_array = new T[copy._size];
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = copy[i];
			return (*this);
		}
		T &operator[](unsigned int n) const {
			if (n >= this->_size)
				throw std::runtime_error(static_cast<std::string>("out of range"));
			return (this->_array[n]);
		}
		~Array(void){
			if(this->_size != 0)
				delete [] this->_array;
		};
	private:
		T *_array;
		unsigned int _size;
};

#endif
