Задание 1
#include <iostream>
#include <Windows.h>

int func(int x , int& y , int z) {
	z = (x * x) + (y * y);
	return z;

}

int main(void) {
	int a{ 0 }, b{}, c{ 0 }, d{ 0 };
	std::cin >> a;
	std::cin >> c;
	b = func(a, c , d);
	std::cout << b << std::endl;

	return 0;
}
Задание 2
  
