#include <iostream>

int main()
{
	int a = 7;
	int b = 45;
	int c = 10;
	int d = 34;

	double x = (double)a * ((double)b + ((double)c / (double)d));

	std::cout << x;
}
