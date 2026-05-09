#include <iostream>

int main() {
	int num1, num2, res;

	std::cout << "Enter first number: ";
	std::cin >> num1;

	std::cout << "Enter second number: ";
	std::cin >> num2;

	res = num1 + num2;

	std::cout << "sum = " << res << std::endl;

	return 0;
}
