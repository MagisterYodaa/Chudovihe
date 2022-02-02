Задание 1 
  
  #include <iostream>
#include <string>
#include <Windows.h>


int dac(int* a, int b) {
    for (int i = 0; i < b; i++) {
        std::cout << "-> ";
        std::cin >> a[i];
    }
    for (int i = 0; i < b; i++) {
        std::cout << a[i] << " ";
    }
    return 1;

}
int main()
{
    const int size1 = 8;
    const int size2 = 4;
    int a[size1];
    int b[size2];
    dac(a, size1);
    dac(b, size2);

}

Задание 2 
  
  
