задание номер 1
#include <iostream>



int func(int judge1, int judge2, int judge3, int judge4, int judge5, int judge6, int judge7, int judge8) {
    int a;
    if (judge1 > 9 || judge1 < 2) {
        a = (judge2 + judge3 + judge4 + judge5 + judge6 + judge7 + judge8) / 7;
        std::cout << a << std::endl;
    }
    else if (judge2 > 9 || judge2 < 2) {
        a = (judge1 + judge3 + judge4 + judge5 + judge6 + judge7 + judge8) / 7;
        std::cout << a << std::endl;
    }
    else if (judge3 > 9 || judge3 < 2) {
        a = (judge2 + judge1 + judge4 + judge5 + judge6 + judge7 + judge8) / 7;
        std::cout << a << std::endl;
    }
    else if (judge4 > 9 || judge4 < 2) {
        a = (judge2 + judge3 + judge1 + judge5 + judge6 + judge7 + judge8) / 7;
        std::cout << a << std::endl;
    }
    else if (judge5 > 9 || judge5 < 2) {
        a = (judge2 + judge3 + judge4 + judge1 + judge6 + judge7 + judge8) / 7;
        std::cout << a << std::endl;
    }
    else if (judge6 > 9 || judge6 < 2) {
        a = (judge2 + judge3 + judge4 + judge5 + judge1 + judge7 + judge8) / 7;
        std::cout << a << std::endl;
    }
    else if (judge7 > 9 || judge7 < 2) {
        a = (judge2 + judge3 + judge4 + judge5 + judge6 + judge1 + judge8) / 7;
        std::cout << a << std::endl;
    }
    else if (judge8 > 9 || judge8 < 2) {
        a = (judge2 + judge3 + judge4 + judge5 + judge6 + judge7 + judge1) / 7;
        std::cout << a << std::endl;
    }
    return 0;
}




int main()
{
    int judge1 = 8;
    int judge2 = 8;
    int judge3 = 9;
    int judge4 = 9;
    int judge5 = 10;
    int judge6 = 10;
    int judge7 = 8;
    int judge8 = 8;
    int a;
    a = func(judge1, judge2, judge3, judge4, judge5, judge6, judge7, judge8);
    std::cout << a << std::endl;
}



задание номер 2


#include <iostream>



int func(int judge1, int judge2, int judge3, int judge4, int judge5, int judge6, int judge7, int judge8) {
    int a;
    if (judge1 > 90 || judge2 > 90 || judge3 > 90 || judge4 > 90 || judge5 > 90 || judge6 > 90 || judge7 > 90 || judge8 > 90) {
        return 5;
    }
    else if (judge1 > 70 && judge1 < 89 || judge2 > 70 && judge2 < 89 || judge3 > 70 && judge3 < 89 || judge4 > 70 && judge4 < 89 || judge5 > 70 && judge5 < 89 || judge6 > 70 && judge6 < 89 || judge7 > 70 && judge7 < 89 || judge8 > 70 && judge8 < 89) {
        return 4;
    }
    else if (judge1 > 50 && judge1 < 69 || judge2 > 50 && judge2 < 69 || judge3 > 50 && judge3 < 69 || judge4 > 50 && judge4 < 69 || judge5 > 50 && judge5 < 69 || judge6 > 50 && judge6 < 69 || judge7 > 50 && judge7 < 69 || judge8 > 50 && judge8 < 69) {
        return 3;
    }
    else {
        return 2;
    }
}




int main()
{
    int student1;
    std::cin >> student1;
    int student2;
    std::cin >> student2;
    int student3;
    std::cin >> student3;
    int student4;
    std::cin >> student4;
    int student5;
    std::cin >> student5;
    int student6;
    std::cin >> student6;
    int student7;
    std::cin >> student7;
    int student8;
    std::cin >> student8;
    int a;
    a = func(student1,student2, student3, student4, student5, student6, student7, student8);
    std::cout << a << std::endl;
}


int main() {
    	int s{ 0 };
    	fun(s);
    }
    
    void fun() {
        const int N = 9;
        int Array[N];
        int sum = 0;
        int sum2 = 1;
    
        for (int i = 0; i < N; i++)
        {
            cout << "Your massive -" << i << " = ";
            cin >> Array[i];
            sum2 = Array[i] * 2;
    
    
        }
        int Max = Array[0], Min = Array[0];
        for (int i = 1; i < N; i++)
        {
            if (Max < Array[i])
                Max = Array[i];
            if (Min > Array[i])
                Min = Array[i];
        }
        cout << "umnojenie all elements - " << sum2 << endl;
        cout << "Max: " << Max << endl;
        cout << "Min: " << Min << endl;
    
        sum = Max + Min;
        cout << "Your summa of massive's elements is = " << sum << endl;
        
    }
    
    int main()
    {
        fun();
    
    }
    
    #include <iostream>
    #include <cstdlib>
    const int N = 5;
    using namespace std;
    int mass[N][N] = { 0 };
    int main()
    {
        setlocale(0, "RUS");
    
        for (int i = 1; i < N; ++i)
            for (int j = 0; j < N; ++j) {
                if (j + i == N - 1);
                else mass[j][i] = 1;
            }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << mass[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
