#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите число: ";
    cin >> n;
    cout << "Таблица умножения:\n";
    for (int i = 1; i <= 10; ++i) {
        cout << setw(2) << right << n << " x "
            << setw(2) << i << " = "
            << setw(3) << n * i << endl;
    }
    return 0;
}