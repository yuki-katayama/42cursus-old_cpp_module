#include "Conversion.hpp"
#include <iomanip>

int main(int argc, char *argv[])
{
  if (argc != 2)
    return (1);
  std::istringstream iss(argv[1]);
  Conversion conversion = Conversion(argv[1]);
  try {
    std::cout << "char: ";
    char result = static_cast<char>(conversion);
    std::cout << "'" << result << "'" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
    try {
    std::cout << "int: ";
    std::cout << static_cast<int>(conversion) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::fixed;
  try {
    std::cout << "float: ";
    std::cout << std::setprecision(1) << static_cast<float>(conversion) << 'f' << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
    try {
    std::cout << "double: ";
    std::cout << std::setprecision(1) << static_cast<double>(conversion) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

