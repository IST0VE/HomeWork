#include <iostream>


int main()
{
	int x = 22;

	(x < 21) ? std::cout << x - 21 : std::cout << (x - 21) * 2;
}

