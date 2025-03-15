#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;

int p;
float A, B;
char op, choice;

void instructions() {
    cout << "             |==============|" << endl;
    cout << "             |              |" << endl;
    cout << "             |  Calculator  |" << endl;
    cout << "             |              |" << endl;
    cout << "             |==============|" << endl;
    cout << endl;
    cout << "Enter your number followed by an Operator, then input the other number." << endl;
    cout << "Example: Number 1 + Number 2 = Answer." << endl;
    cout << endl;
    cout << "(By Rafiul Hasan C243184)" << endl;
    cout << endl;
}

void pInfo() {
    cout << "How many digits do you want to print after the decimal point?" << endl;
}

void getInput() {
    cin >> A >> op >> B;

    if (cin.fail()) {
        cout << "Enter valid numbers" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getInput();
    } else {
        system("cls");
    }
}

void prec() {
    cin >> p;
    if (cin.fail() || p < 0) {
        cout << "Enter a valid positive number for precision." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        prec();
    } else {
        system("cls");
    }
}

void choice_track() {
    cin >> choice;
    if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
        cout << "Please enter Y/N or y/n" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        choice_track();
    }
}

int main() {
    instructions();

    do {
        getInput();
        instructions();
        pInfo();
        prec();
        instructions();
        cout << fixed << setprecision(p);

        switch (op) {
            case '+': cout << A << " " << op << " " << B << " = " << A + B; break;
            case '-': cout << A << " " << op << " " << B << " = " << A - B; break;
            case '*': cout << A << " " << op << " " << B << " = " << A * B; break;
            case '/':
                if (B != 0) {
                    cout << A << " " << op << " " << B << " = " << A / B;
                } else {
                    cout << "Invalid Inputs (division by zero)" << endl;
                }
                break;
            case '%':
                if (B != 0) {
                    cout << A << " " << op << " " << B << " = " << fmod(A, B);
                } else {
                    cout << "Invalid Inputs (division by zero)" << endl;
                }
                break;
            default: cout << "Syntax Error" << endl; break;
        }

        cout << endl;
        cout << "Do you want to perform another calculation? (y/n): ";
        choice_track();
        system("cls");
        instructions();

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
