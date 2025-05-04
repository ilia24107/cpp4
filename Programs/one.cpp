#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    vector<int> nums;
    int num;
    cout << "Введите целые числа (Ctrl+D для остановки): ";
    while (cin >> num) {
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    cout << "Сортировка: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}