#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    string filename;
    cout << "Введите имя файла: ";
    cin >> filename;
    ifstream file(filename);

    if (!file) {
        cerr << "Ошибка открытия файла!" << endl;
        return 1;
    }

    int lines = 0, words = 0, chars = 0;
    string line;
    while (getline(file, line)) {
        lines++;
        chars += line.size() + 1; // +1 for '\n'
        bool inWord = false;
        for (char c : line) {
            if (isspace(c)) {
                inWord = false;
            }
            else if (!inWord) {
                words++;
                inWord = true;
            }
        }
    }
    cout << "Строки: " << lines << "\nСлова: " << words
        << "\nСимволы: " << chars << endl;
    return 0;
}