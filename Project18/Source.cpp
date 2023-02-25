#include <iostream>
#include <cstdlib>
#include <ctime>
#include<Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int a = 5;
    const int b = 5;
    int array[a][b];
    int zero = 0;

    srand(time(NULL));

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            array[i][j] = rand() % 10;
        }
    }


    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (array[i][j] == 0) {
                zero++;
            }
        }
    }
    cout << "Кількість нулів у масиві: " << zero << endl;

}