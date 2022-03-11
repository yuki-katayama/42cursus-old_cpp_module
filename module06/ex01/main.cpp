#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data *data_ptr = new Data(10);
	uintptr_t ptr = serialize(data_ptr);
	std::cout << "---- Serialization ----" << std::endl;
	std::cout << ptr << std::endl;
	std::cout << data_ptr << std::endl;
	std::cout << "----- Deserialize -----" << std::endl;
	Data *ret = deserialize(ptr);
	std::cout << "Adress: " << ret << std::endl;
	std::cout << "Value: " << ret->getValue() << std::endl;
	;
	std::cout << "-----------------------" << std::endl;
	if (ret == data_ptr)
	{
		std::cout << "the same pointer" << std::endl;
	}
	else
	{
		std::cout << "different pointer" << std::endl;
	}
	delete data_ptr;
	return 0;
}
