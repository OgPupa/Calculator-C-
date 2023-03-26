#include "voda.h"
#include <iostream>
#include <ctime>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    Ocean ocean1("Atlantic Ocean", 91660000, 8742);
    cout << ocean1 << endl;
    Ocean ocean2;
    cin >> ocean2;
    cout << ocean2 << endl;
    Sea sea1("Ohotskoe Sea", 1603000, 1500);
    cout << sea1 << endl;
    Sea sea2;
    cin >> sea2;
    cout << sea2 << endl;
    Bay bay1("Amurskiy Bay", 300, 49);
    cout << bay1 << endl;
    Bay bay2;
    cin >> bay2;
    cout << bay2 << endl;
    return 0;
}