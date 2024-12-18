#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

	int a, b, c;
	std::cin >> a >> b >> c;
	int result = pow(a + 2*b, 11) - 5*c;
	result *= 3;
	std::cout << std::fixed << std::setprecision(0);
	
	std::cout << "Выражение = " << result;
	
}
