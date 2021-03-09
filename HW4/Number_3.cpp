#include <iostream>

int main()
{
	setlocale(0, "");

	const int x = 3;
	const int y = 5;

	if (x == 10 || y == 10 || (x + y) == 10)
	{
		std::cout << ("Истина");
	}
	else
	{
		std::cout << ("Ложь");
	}
}
