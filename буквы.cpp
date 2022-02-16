#include <iostream>
#include <Windows.h>

int main() {
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	char Z;
	char chislo;
	std::cin >> chislo;
	int alfa;
	for (size_t i = 1; i < 4; i++) {

		if ('@' < chislo && chislo < 'X') {
			chislo = chislo + 1;
			std::cout << chislo << std::endl;
		}
		else {
			if ('Z' == chislo) {
				chislo = chislo - 26;
			}
			chislo = chislo + 1;
			std::cout << chislo << std::endl;
		}
		
		/*if ('`' < chislo && chislo < 'x') {
			chislo = chislo + 1;
			std::cout << chislo << std::endl;
		}
		else {
			if ('z' == chislo2) {
				chislo = chislo - 26;
			}
			chislo = chislo + 1;
			std::cout << chislo << std::endl;
		}*/
	}
}
	
