#include <iostream>

int main()
{
	int x = 7;

	(x < 21) ? std::cout << x - 21 : std::cout << (x - 21) * 2;
}

