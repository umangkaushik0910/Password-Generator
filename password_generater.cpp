
#include <iostream>
#include <string>
#include <random>
using namespace std;

int main() {
    string characters =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*";

    int length;
    cout << "Enter password length: ";
    cin >> length;

    if (length <= 0) {
        cout << "Please enter a valid password length." << endl;
        return 0;
    }

    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(
        0, characters.length() - 1
    );

    string password = "";

    for (int i = 0; i < length; i++) {
        password += characters[distribution(generator)];
    }

    cout << "Generated Password: " << password << endl;

    return 0;
}
