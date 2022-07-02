#include <iostream>

double randomfunction(double x) {
	return (3 * x + 7);
}
double mul(double x) {
	return 2 * x;
}

double sumoffunction(double (*f)(double), double (*d)(double), int startvalue, int endvalue) {
	double result = 0;
	for (int i = startvalue; i <= endvalue; i++){
		result += f(i);
		result += d(i);
	}	
	return result;
}

int main() {
	std::cout << "Now outputting the sum of random function's values from 0 to 3" << std::endl;
	std::cout << "The sum is " << sumoffunction(randomfunction, mul, 0, 3) << std::endl;
}