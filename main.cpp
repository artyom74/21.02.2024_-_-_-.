#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int num, sum = 0;

    cout << "Введите число: ";
    cin >> num;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Сумма цифр числа: " << sum << endl;

    return 0;
}


