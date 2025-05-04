#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    vector<string> rows;
    string row;
    cout << "Введите строки (пусто для остановки):\n";
    while (getline(cin, row) && !row.empty()) {
        rows.push_back(row);
    }

    size_t max_len = 0;
    for (const auto& r : rows) {
        max_len = max(max_len, r.size());
    }

    cout << "Выровненная по правому краю таблица:\n";
    for (const auto& r : rows) {
        cout << setw(max_len) << right << r << endl;
    }
    return 0;
}