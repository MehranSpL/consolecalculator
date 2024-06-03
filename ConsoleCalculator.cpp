#include <iostream>
#include <Windows.h>

using namespace std;

float bealave(float adadeyek, float adadedo) {
    return adadeyek + adadedo;
}

float manfi(float adadeyek, float adadedo) {
    return adadeyek - adadedo;
}

float zarbdar(float adadeyek, float adadedo) {
    return adadeyek * adadedo;
}

float taghsim(float adadeyek, float adadedo) {
    if (adadedo == 0) {
        cout << "Dashi nemitunam adado taghsim bar 0 konam ke" << endl;
        Sleep(3000);
        exit(NULL);
    }
    return adadeyek / adadedo;
}

int main() {
    char chikarkonam;
    float numberone, numbertwo;

    cout << "Ye adad begoo: ";
    cin >> numberone;

    cout << "Amali ke mikhay anjam bedam roo entekhab kon ( + | - | * | / ): ";
    cin >> chikarkonam;

    cout << "Ye adade dige ham begoo ke kar dar biyad: ";
    cin >> numbertwo;

    switch (chikarkonam) {
    case '+':
        cout << "Hasel mishe: " << bealave(numberone, numbertwo) << endl;
        Sleep(3000);
        exit(NULL);
    case '-':
        cout << "Hasel mishe: " << manfi(numberone, numbertwo) << endl;
        Sleep(3000);
        exit(NULL);
    case '*':
        cout << "Hasel mishe: " << zarbdar(numberone, numbertwo) << endl;
        Sleep(3000);
        exit(NULL);
    case '/':
        cout << "Hasel mishe: " << taghsim(numberone, numbertwo) << endl;
        Sleep(3000);
        exit(NULL);
    default:
        Sleep(3000);
        exit(NULL);
    }

    return 0;
}