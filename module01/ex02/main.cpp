#include <iostream>

void test(void)
{
	std::string stringOriginal = "HI THIS IS BRAIN";
	std::string &stringREF = stringOriginal;
	std::string *stringPTR = &stringOriginal;

	std::cout << "---- ADDRESS ----" << std::endl;
	std::cout << "ORIGINAL: " << &stringOriginal << std::endl;
	std::cout << "  REF   : " << &stringREF << std::endl;
	std::cout << "  PTR   : " << stringPTR << std::endl;

	std::cout << "---- VALUE ----" << std::endl;
	std::cout << "original: " << stringOriginal << std::endl;
	std::cout << "  REF   : " << stringREF << std::endl;
	std::cout << "  PTR   : " << *stringPTR << std::endl;


	std::cout << std::endl << std::endl << "DIFF" << std::endl;
	/**
	 * 自分自身のアドレスの獲得ができない
	 */
	std::cout << "---- ADDRESS ----" << std::endl;
	std::cout << "ORIGINAL: " << &stringOriginal << std::endl;
	std::cout << "  REF   : " << &stringREF << std::endl;
	std::cout << "  PTR   : " << &stringPTR << std::endl << std::endl;

	/**
	 * REF: 参照先の値を変更
	 * PTR: 参照先を変更
	 */
	std::string stringOriginal2 = "HI THIS IS 42 TOKYO";
	stringREF = stringOriginal2;
	stringPTR = &stringOriginal2;
	std::cout << "---- ADDRESS ----" << std::endl;
	std::cout << "ORIGINAL: " << &stringOriginal2 << std::endl;
	std::cout << "  REF   : " << &stringREF << std::endl;
	std::cout << "  PTR   : " << stringPTR << std::endl;

	/**
	 * nullで初期化できない
	 */
	int *intPtr = nullptr;
	// int &intRef = nullptr;
}

int main(void){
	test();
	// while(1){}
}
