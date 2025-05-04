#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    string s;
    cout << "Введите строку: ";
    getline(cin, s);

    int chars = s.length();
    int spaces = 0, punct = 0;
    for (char c : s) {
        if (isspace(c)) spaces++;
        else if (ispunct(c)) punct++;
    }

    cout << left << setw(15) << "Символы:" << chars << "\n"
        << setw(15) << "Пробелы:" << spaces << "\n"
        << setw(15) << "Знаки препинания:" << punct << endl;
    return 0;
}