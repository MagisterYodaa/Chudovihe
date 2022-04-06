задание номер 1

#include <iostream>



int func(int x, int y) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; i++) {
            std::cout << "*" << std::endl;
        }
        std::cout << "\n" << std::endl;
    }
    std::cout << "\n" << std::endl;
    return 0;
}




int main()
{
    int height;
    int width;
    std::cin >> height;
    std::cin >> width;
    int a;
    a = func(height, width);
    std::cout << a << std::endl;
}


задание номер 2
