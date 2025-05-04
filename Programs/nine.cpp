#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    vector<double> nums;
    double num;
    cout << "Введите числа (Ctrl+D нажмите для остановки): ";

    // Считываем числа
    while (cin >> num) {
        nums.push_back(num);
    }

    // Проверяем, ввел ли пользователь хотя бы одно число
    if (nums.empty()) {
        cout << "Никаких цифр введено не было." << endl;
        return 0;
    }

    // Сортируем числа
    sort(nums.begin(), nums.end());

    // Вычисляем среднее
    double sum = 0;
    for (double n : nums) {
        sum += n;
    }
    double mean = sum / nums.size();

    // Вычисляем медиану
    double median;
    if (nums.size() % 2 == 0) {
        median = (nums[nums.size() / 2 - 1] + nums[nums.size() / 2]) / 2;
    }
    else {
        median = nums[nums.size() / 2];
    }

    // Вычисляем моду
    map<double, int> freq;
    for (double n : nums) {
        freq[n]++;
    }

    double mode = nums[0];
    int max_count = 0;

    for (const auto& pair : freq) {
        if (pair.second > max_count) {
            max_count = pair.second;
            mode = pair.first;
        }
    }

    // Выводим результаты
    cout << fixed << setprecision(2);
    cout << "Среднее: " << mean << "\nМедиана: " << median
        << "\nМоде: " << mode << endl;

    return 0;
}