
задание 1
#include <iostream>
#include <string>

float value(int a) {
    float b;
    b = (a - 32)*5/9;
    return b;
}
int main()
{
    setlocale(0, "rus");
    std::cout << "ВВедите Фарингейт: ";
    float a;
    std::cin >> a;
    std::cout << value(a);
}
	


задание 2
	#include <iostream>
#include <string>

float value(int a) {
    float b;
    b = 25.4 * a;
    return b;
}
int main()
{
    setlocale(0, "rus");
    std::cout << "Введите длину в дюймах: ";
    float a;
    std::cin >> a;
    std::cout << value(a);
}



задание 3
	
#include <iostream>
#include <string>

float value(int a) {
    float b;
    b = 1.600/a;
    return b;
}
int main()
{
    setlocale(0, "rus");
    std::cout << "ВВедите Сколько километров: ";
    float a;
    std::cin >> a;
    std::cout << value(a);
}


задание 4
	
