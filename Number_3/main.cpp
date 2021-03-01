#include <iostream>

extern int a;
extern int b;
extern int c;
extern int d;

int main() {

    double x = (double)a * ((double)b + ((double)c / (double)d));

    std::cout << x;
}
