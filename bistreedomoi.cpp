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
#include <iostream>
#include <Windows.h>

int func(int x , int& y , int z , int h , int w) {
	z = sqrt((x - h)*2 + (y - w)*2);
	return z;

}
                                                                

int main(void) {
	int a{ 0 }, b{}, c{ 0 }, d{ 0 } , g{0} , j{0};
	std::cin >> a;
	std::cin >> c;
	std::cin >> g;
	std::cin >> j;
	b = func(a, c , d , g , j);
	std::cout << b << std::endl;

	return 0;
}

Задание 3
