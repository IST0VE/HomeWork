#include <iostream>

int x;
int i;

int main()
{
    setlocale(0, "");

    std::cout << ("Введите число: ");
    std::cin >> x;

    bool prime = true;

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            prime = false;
            break;
        }
    }
    std::cout << "Число " << x << " является простым " << std::boolalpha << prime;
}
