#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

using namespace std; // Использование пространства имен std

// Функция для вычисления элемента функционального ряда
double functionalSeriesTerm(int k, double x) {
    return pow(-1, k) * sin(k * x) / (2 + k * k);
}

int main() {
    setlocale(LC_ALL, "ru"); // Установка локали на русский язык

    double x = 1.0; // Пример значения x
    double sum = 0.0;
    double tolerance = 1e-6; // Точность до 10^-6
    int k = 1;
    double term;

    cout << setprecision(10);
    do {
        term = functionalSeriesTerm(k, x); // Вычисление текущего элемента ряда
        sum += term; // Добавление элемента к сумме
        k++;
    } while (abs(term) > tolerance); // Проверка на точность

    cout << "Сумма функционального ряда: " << sum << endl;

    return 0;
}
