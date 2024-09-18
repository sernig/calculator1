#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double firstNum, secondNum, result;
    char operation;

    cout << "������� ������ �����: ";
    cin >> firstNum;

    cout << "������� �������� (+, -, *, /, %): ";
    cin >> operation;

    cout << "������� ������ �����: ";
    cin >> secondNum;

    switch (operation) {
    case '+':
        result = firstNum + secondNum;
        cout << "���������: " << result << endl;
        break;
    case '-':
        result = firstNum - secondNum;
        cout << "���������: " << result << endl;
        break;
    case '*':
        result = firstNum * secondNum;
        cout << "���������: " << result << endl;
        break;
    case '/':
        if (secondNum != 0) {
            result = firstNum / secondNum;
            cout << "���������: " << result << endl;
        }
        else {
            cout << "������: ������� �� ����." << endl;
        }
        break;
    case '%':
        result = (firstNum * secondNum) / 100;
        cout << "���������: " << result << endl;
        break;
    default:
        cout << "������: �������� ��������." << endl;
        break;
    }

    return 0;
}