#include <iostream>

extern int a; //from foo.cpp
extern int b; //from foo.cpp
extern int c; //from foo.cpp
extern int d; //from foo.cpp

int main() {

    double x = (double)a * ((double)b + ((double)c / (double)d));

    std::cout << x;
}
