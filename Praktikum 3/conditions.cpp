#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter the number: ";
    cin >> number;

    string result = (number % 2 == 0) ? "Genap" : "Ganjil";

    cout << "The number is: " << result;

    return 0;
}
