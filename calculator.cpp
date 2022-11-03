#include "calculator.h"
#include <iostream>

int main() {
  std::cout << "texthere\n";
}
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}
