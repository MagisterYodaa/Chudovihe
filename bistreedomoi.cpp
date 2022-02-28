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
#include <iostream>

int func2(int x, int m2) {
	m2 = x % 1000 / 100;
	return m2;
}

int func1(int x, int m1) {
	m1 = x % 100 / 10;
	return m1;
}

int func(int x, int m) {
	m = x % 10;
	return m;

}

int main(void) {
	int a{ 0 }, b{ 0 }, d{ 0 }, j{ 0 }, k{ 0 }, l, v;
	std::cin >> a;
	b = func(a, k);
	l = func1(a, j);
	v = func2(a, d);
	std::cout << v << '\n' << l << '\n' << b << '\n' << std::endl;
	return 0;
}

Задание 4
#include <iostream>
#include<cmath>

int func1(int m2 = 5, int m1 = 6, int m0 = 7) {
	int answer = 0;
	answer += m2 * 100;
	answer += m1 * 10;
	answer += m0;
	return answer;
}

int main() {
	int a{ 4 }, b{ 3 }, c{ 8 }, ans{ 0 };
	ans = func1();
	std::cout << ans << std::endl;
}

Задание 5
