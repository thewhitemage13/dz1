#include <iostream>
using namespace std;

double Mth(int ar[], int length) {
    if (length == 0) {
        return 0.0;  // Пустой массив, среднее равно 0.0
    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += ar[i];
    }
    return static_cast<double>(sum) / length;  // Среднее арифметическое
}

int main() {
    int ar[] = { 1, 2, 3, 4, 5 };
    int length = sizeof(ar) / sizeof(ar[0]);

    double average = Mth(ar, length);

    cout <<average;

    return 0;
}