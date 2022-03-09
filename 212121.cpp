задание номер 1
  
#include <iostream>



int main() {
	int a, b, c, d, e, f;
	int a1, b1, c1, d1, e1, f1;
	int var;
	std::cin >> var;
	a1 = var / 100000;
	b1 = var / 10000 % 10;
	c1 = var / 1000 % 10;
	d1 = var / 100 % 10;
	e1 = var / 10 % 10;
	f1 = var % 10;

	if (a1 + b1 + c1 == d1 + e1 + f1) {
		std::cout << "Shastlivoe chislo";
	}
	else {
		std::cout << "oshibka" << std::endl;
	}


}


задание номер 2
  
  
  
  
#include <iostream>



int main() {
	int a1, b1, c1, d1, e1, f1;
	int var;
	std::cin >> var;

	c1 = var / 1000;
	d1 = var / 100 % 10;
	e1 = var / 10 % 10;
	f1 = var % 10;

	if (var > 9999 || var < 100) {
		std::cout << "oshibka";
	}
	else {
		std::cout << e1 << f1 << c1 << d1 << std::endl;
	}


}





задание номер 3
  
  
  
#include <iostream>



int main() {
	int a1, b1, c1, d1, e1, f1, a2;
	int var;
	std::cin >> a1;
	std::cin >> b1;
	std::cin >> c1;
	std::cin >> d1;
	std::cin >> e1;
	std::cin >> f1;
	std::cin >> a2;


	if (a1 > b1 && a1 > c1 && a1 > d1 && a1 > e1 && a1 > f1 && a1 > a2) {
		std::cout << a1;
	}

	else if (b1 > a1 && b1 > c1 && b1 > d1 && b1 > e1 && b1 > f1 && b1 > a2) {
		std::cout << b1;
	}

	else if (c1 > b1 && c1 > a1 && c1 > d1 && c1 > e1 && c1 > f1 && c1 > a2) {
		std::cout << c1;
	}
	else if (d1 > b1 && d1 > c1 && d1 > a1 && d1 > e1 && d1 > f1 && d1 > a2) {
		std::cout << d1;
	}
	else if (e1 > b1 && e1 > c1 && e1 > d1 && e1 > a1 && e1 > f1 && e1 > a2) {
		std::cout << e1;
	}
	else if (f1 > b1 && f1 > c1 && f1 > d1 && f1 > e1 && f1 > a1 && f1 > a2) {
		std::cout << f1;
	}
	else if (a2 > b1 && a2 > c1 && a2 > d1 && a2 > e1 && a2 > f1 && a2 > a1) {
		std::cout << a2;
	}
	

}




задание номер 4
  
  
#include <iostream>



int main() {
	int rastAB;
	int rastBC;
	int gruz;
	int emkost = 300;
	
	std::cin >> rastAB;
	std::cin >> rastBC;
	std::cin >> gruz;
	int a;
	int b;
	int c;
	int d;
	int ab;
	int bc;

	if (gruz < 500) {
		ab = rastAB * 1;
		a = emkost - ab;
		std::cout << a << std::endl;
	}
	else if (gruz < 1000) {
		ab = rastAB * 4;
		b = emkost - ab;
		std::cout << b << std::endl;
	}
	else if (gruz < 1500) {
		ab = rastAB * 7;
		c = emkost - ab;
		std::cout << c << std::endl;
	}
	else if (gruz < 2000) {
		ab = rastAB * 9;
		d = emkost - ab;
		std::cout << d << std::endl;
	}

}




задание номер 5
