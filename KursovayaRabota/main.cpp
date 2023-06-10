#include <iostream>
#include "classes.h"
using namespace std;
int main() {
    cout << endl;
    cout << "This program is designed to solve different types of quadratic equations." << endl;
    cout << "Created by Trunin Kirill / 09.03.02 Information systems and technologies." << endl << endl;
    cout << "At first, You have to type number of equation type." << endl;
    cout << "At second, You have to type requested coefficients." << endl << endl;
    cout << "To close the program, you need to click on the console cross." << endl << endl;
    while (true) {
        int eq_type;

        cout << "Enter an equation type: ";
        cin >> eq_type;
        // []() функция без имени, чтоб изменить область видимости переменных
        switch (eq_type) {
        case 1:
            []() {
                Type1 e1;
                e1 = *new Type1();
                e1.show();
                e1.get_answer();
            }();
            break;
        case 2:
            []() {
                double A;
                cout << "Enter the A coefficient: ";
                cin >> A;
                Type2 e2 = *new Type2(A);
                e2.show();
                e2.get_answer();
            }();
            break;
        case 3:
            []() {
                double C;
                cout << "Enter the C coefficient: ";
                cin >> C;
                Type3 e3 = *new Type3(C);
                e3.show();
                e3.get_answer();
            }();
            break;
        case 4:
            []() {
                double A, C;
                cout << "Enter the A coefficient: ";
                cin >> A;
                cout << "Enter the C coefficient: ";
                cin >> C;
                Type4 e4 = *new Type4(A, C);
                e4.show();
                e4.get_answer();
            }();
            break;
        case 5:
            []() {
                double B, C;
                cout << "Enter the B coefficient: ";
                cin >> B;
                cout << "Enter the C coefficient: ";
                cin >> C;
                Type5 e5 = *new Type5(B, C);
                e5.show();
                e5.get_answer();
            }();
            break;
        case 6:
            []() {
                double A, B, C;
                cout << "Enter the A coefficient: ";
                cin >> A;
                cout << "Enter the B coefficient: ";
                cin >> B;
                cout << "Enter the C coefficient: ";
                cin >> C;
                Type6 e6 = *new Type6(A, B, C);
                e6.show();
                e6.get_answer();
            }();
            break;
        case 7:
            []() {
                double B;
                cout << "Enter the B coefficient: ";
                cin >> B;
                Type7 e7 = *new Type7(B);
                e7.show();
                e7.get_answer();
            }();
            break;
        case 8:
            []() {
                double A, B;
                cout << "Enter the A coefficient: ";
                cin >> A;
                cout << "Enter the B coefficient: ";
                cin >> B;
                Type8 e8 = *new Type8(A, B);
                e8.show();
                e8.get_answer();
            }();
            break;
        default:
            cout << "There isn't type of equation " << eq_type << ". Please enter correct type." << endl;
            break;
        }

        cout << endl;
    }

}