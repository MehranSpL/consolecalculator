#include <iostream>
#include <Windows.h>

using namespace std;

float plus(float num1, float num2) {
    return num1 + num2;
}

float negative(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 == 0) {
        cout << "Sorry, cannot divide by Zero." << endl;
        Sleep(3000);
        exit(NULL);
    }
    return num1 / num2;
}

int main() {
    char operation;
    float numb1, numb2;

    cout << "Ye adad begoo: ";
    cin >> numb1;

    cout << "Amali ke mikhay anjam bedam roo entekhab kon ( + | - | * | / ): ";
    cin >> operation;

    cout << "Ye adade dige ham begoo ke kar dar biyad: ";
    cin >> numb2;

    switch (operation) {
    case '+':
        cout << "Result is: " << plus(numb1, numb2) << endl;
        Sleep(3000);
        exit(NULL);
    case '-':
        cout << "Result is: " << negative(numb1, numb2) << endl;
        Sleep(3000);
        exit(NULL);
    case '*':
        cout << "Result is: " << multiply(numb1, numb2) << endl;
        Sleep(3000);
        exit(NULL);
    case '/':
        cout << "Result is: " << divide(numb1, numb2) << endl;
        Sleep(3000);
        exit(NULL);
    default:
        Sleep(3000);
        exit(NULL);
    }

    return 0;
}
