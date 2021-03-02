#include <iostream>


int main()
{
	int x = 22;

	std::cout << (x < 21) ? x - 21 :(x - 21) * 2;
}

