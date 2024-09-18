#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double firstNum, secondNum, result;
    char operation;

    cout << "Введите первое число: ";
    cin >> firstNum;

    cout << "Введите оператор (+, -, *, /, %): ";
    cin >> operation;

    cout << "Введите второе число: ";
    cin >> secondNum;

    switch (operation) {
    case '+':
        result = firstNum + secondNum;
        cout << "Результат: " << result << endl;
        break;
    case '-':
        result = firstNum - secondNum;
        cout << "Результат: " << result << endl;
        break;
    case '*':
        result = firstNum * secondNum;
        cout << "Результат: " << result << endl;
        break;
    case '/':
        if (secondNum != 0) {
            result = firstNum / secondNum;
            cout << "Результат: " << result << endl;
        }
        else {
            cout << "Ошибка: деление на ноль." << endl;
        }
        break;
    case '%':
        result = (firstNum * secondNum) / 100;
        cout << "Результат: " << result << endl;
        break;
    default:
        cout << "Ошибка: неверный оператор." << endl;
        break;
    }

    return 0;
}