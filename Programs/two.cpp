#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    string s;
    cout << "Введите строку: ";
    getline(cin, s);

    int vowels = 0, consonants = 0;
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }
    cout << "Vowels: " << vowels << "\nConsonants: " << consonants << endl;
    return 0;
}