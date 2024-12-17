#include <iostream>
#include <cmath>

void solve_quadratic(float a, float b, float c){
	float x1,x2;
	float d = b * b - 4 * a * c;
	if(d < 0){
		std::cout << "нет решений";
	}else if(d==0){
		x1 = (-b) / (2 * a);
		std::cout << "x = " << x1;
	}else{
		float sqrtD = sqrt(d);
		x1 = (-b+ sqrtD) / (2 * a);
		x2 = (-b - sqrtD) / (2 * a);
		std::cout << "x1 = " << x1 << ", x2 = " << x2;

	}
}

int main(){
	float a, b, c;
	std::cin >> a >> b >> c;
	solve_quadratic(a, b, c);
	return 0;
}
