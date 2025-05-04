#include <fstream>
#include <set>
#include <string>
#include <algorithm>
#include <iostream>

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

    set<string> uniqueWords;
    string word;
    while (file >> word) {
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        uniqueWords.insert(word);
    }

    cout << "Уникальные слова:\n";
    for (const auto& w : uniqueWords) {
        cout << w << endl;
    }
    return 0;
}