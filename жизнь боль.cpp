#include <iostream>
#include <Windows.h>



//int krestik() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//
//
//	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
//	std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
//	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
//	return 0;
//
//}
//
//int nolik() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//
//
//	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
//	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
//	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
//	return 0;
//
//}



//int vstav(int x, int y) {
//	COORD p = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
//
//	return 0;
//}


//void gotoxy(int x, int y) {
//	COORD p = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
//}


void pole()
{
	
}


void gridold() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << "1  2  3" << std::endl;
	std::cout << "4  5  6" << std::endl;
	std::cout << "7  8  9" << std::endl;
	std::cout << "Для вывода крестика или нолика ваот кординат клеток 1(0,0) 2()" << std::endl;
}



void gotoxy(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
	/*std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;*/
	std::cout << " * * " << std::endl; 
	std::cout << "  *  " << std::endl;
	std::cout << " * * " << std::endl;

}

void gotoxy2(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;

	

}



int main(void)
{
	gridold();
	int a{ 0 }, u{ 0 };
	int b;
	int g;



	int j;
	std::cin >> j;
	for (int i = 0; i < j; i++) {
		std::cin >> a;
		std::cin >> u;
		gotoxy(a, u);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		std::cin >> b;
		std::cin >> g;

		gotoxy2(b, g);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		/*j = vstav(a, u);*/
	}


	return 0;
}
