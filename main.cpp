#include <iostream>

using namespace std;

int NWD(int a, int b);
int NWW(int a, int b);

int main()
{
    char proces;

    do {
        int a, b;
        cout << "Podaj dwie liczby:" << endl;

        cin >> a >> b;

        cout << "NWD wynosi: " << NWD(a, b) << endl;
        cout << "NWW wynosi: " << NWW(a, b) << endl;

        cout << "Czy Czy chcesz jeszcze cos policzyc? (T/t) " << endl;
        cin >> proces;
    } while (proces == 't' || proces == 'T');
    return 0;
}

int NWD(int a, int b) {
    int i = 0;
    if (a > b) {
        i = a;
    } else {
        i = b;
    }
    while (i > 0) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
        i--;
    }
    return 1;
}

int NWW(int a, int b) {
    return (a * b) / NWD(a, b);
}
