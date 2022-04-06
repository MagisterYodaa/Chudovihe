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


задание номер 3
#include <iostream>



int func(int x) {
    for (std::size_t i = 0; i < x; i++)
    {
        for (std::size_t j = 0; j <= i; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
    return 0;
}




int main()
{
    int height;
    std::cin >> height;
    int a;
    a = func(height);
    std::cout << a << std::endl;
}
