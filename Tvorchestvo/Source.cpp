#include <vector>
#include <iostream>
#include <string>;

 int main()
{
	int pisa;
	pisa = 5;
	std::cout << pisa << std::endl;
	//вывод русского языка//
	setlocale(LC_ALL, "");
	////////////////////////
	std::string kopra{ "барсуки" };

	std::cout << kopra << std::endl;

	std::vector<int> numbers{ 1, 2, 3, 4, 5 };
	numbers[0] = 4;
	for (int n : numbers)
		std::cout << n << "\t" << std::endl ;



	std::string kobrik = { "enot" };
		std::cout << kobrik << std::endl;

}
 
