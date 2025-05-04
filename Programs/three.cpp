#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    vector<string> lines;
    string line;
    cout << "Введите строку (пустая строка для остановки):\n";
    while (getline(cin, line) && !line.empty()) {
        lines.push_back(line);
    }
    sort(lines.begin(), lines.end());
    cout << "Сортировка:\n";
    for (const auto& l : lines) {
        cout << setw(20) << left << l << endl;
    }
    return 0;
}