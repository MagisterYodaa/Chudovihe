задание номер 1

#include <iostream>
#include <Windows.h>



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::cout << "Задание номер 1 А" <<std::endl;
	
	int b;
	int a;
	int r;
	std::cin >> a;
	b = a * a;
	r = b * b;
	std::cout << r << std::endl;

	std::cout << "Задание номер 1 Б" << std::endl;

	int c;
	int d;
	int t;
	int k;
	std::cin >> d;
	c = d *d;
	t = c * c;
	k = t * c;
	std::cout << k << std::endl;


	std::cout << "Задание номер 1 В" << std::endl;


	int g;
	int v;
	int l;
	int f;
	int p;
	int y;

	std::cin >> g;
	v = g * g * g;
	l = v * v;
	f = v * l * l;
	

	std::cout << f <<std::endl;
}




задание номер 4

#include <iostream>
#include <Windows.h>



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int a;
	int b;
	int c;
	std::cin >> a >> b >> c;
	if (a == b) {
		std::cout<< "Вот равные числа" <<std::endl;
		std::cout << a << " И" <<  b << std::endl;
	}
	else if (b == c) {
		std::cout << "Вот равные числа" << std::endl;
		std::cout << b << " И" <<  c << std::endl;
	}
	else if (c == a) {
		std::cout << "Вот равные числа" << std::endl;
		std::cout << c << " И " <<  a << std::endl;
	}
	else {
		std::cout<< " Нет похожих чисел" <<std::endl;
	}
}






#include <iostream>
#include <Windows.h>



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	srand(time(0));

	int randomnumber = rand() % (1000000 - 100000 + 1) + 100000;
	std::cout << randomnumber << std::endl;

}
