#include <iostream>

int x;
int y;

int main()
{
	setlocale(0, "");

	std::cout << ("Введите число X: ");
	std::cin >> x;
	std::cout << ("Введите число Y: ");
	std::cin >> y;

	if ((x + y) <= 20 && (x + y) > 10)
	{
		std::cout << ("true");
	}
	else
	{
		std::cout << ("false");
	}
}
