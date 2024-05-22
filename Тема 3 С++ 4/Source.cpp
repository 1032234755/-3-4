#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

using namespace std; // ������������� ������������ ���� std

// ������� ��� ���������� �������� ��������������� ����
double functionalSeriesTerm(int k, double x) {
    return pow(-1, k) * sin(k * x) / (2 + k * k);
}

int main() {
    setlocale(LC_ALL, "ru"); // ��������� ������ �� ������� ����

    double x = 1.0; // ������ �������� x
    double sum = 0.0;
    double tolerance = 1e-6; // �������� �� 10^-6
    int k = 1;
    double term;

    cout << setprecision(10);
    do {
        term = functionalSeriesTerm(k, x); // ���������� �������� �������� ����
        sum += term; // ���������� �������� � �����
        k++;
    } while (abs(term) > tolerance); // �������� �� ��������

    cout << "����� ��������������� ����: " << sum << endl;

    return 0;
}
