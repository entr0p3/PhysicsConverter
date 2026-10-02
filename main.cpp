#include <windows.h>
#include <iostream>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char MenuKey;
    char Operator;
    double Num1{0};
    double Result={0};

    // K = C + 273.15
    // C = K - 273.15

    cout << "Конвертер температуры: \n";
    cout << "1. Цельсий -> Кельвин\n";
    cout << "2. Кельвин -> Цельсий\n";

    cin >> MenuKey;

    switch (MenuKey) {
        case '1':
            MenuKey = '1';
            cout << "Введите градус Цельсия для конвертации в Кельвин: ";
            cin >> Num1;
            cout << "Введите оператор(+ -): ";
            cin >> Operator;

            if (Operator == '+') {
                Result = Num1 + 273.15;
            } else if (Operator == '-') {
                Result = Num1 - 273.15;
            }
            break;

        case '2':
            MenuKey = '2';
            cout << "Введите Кельвин для конвертации в Цельсий: ";
            cin >> Num1;

            Result = Num1 - 273.15;

            break;


    }

    cout << Result;

    return 0;
}
