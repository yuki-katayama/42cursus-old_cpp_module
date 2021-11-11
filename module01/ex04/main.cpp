 #include <iostream>
 #include <fstream>

 int main(void)
 {
	 std::ifstream ifs("main.cpp");
	 if (ifs.fail())
	 {
		 std::cout << "file not found" << std::endl;
		 return (1);
	 }
 }