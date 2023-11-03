#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void pz1()
{
    for (int i = 0; i < 5; i++) {
        int x;
        cout << "Enter an x: ";
        cin >> x;
        double y = pow(sin(x), 5) + abs(5 * x - 1.5);
        cout << y << endl;
    }
}

void pz2()
{
    int n = 10;
    int product = 1;

    cout << "Enter " << n << " natural numbers:" << endl;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (number <= 0) {
            cout << "Please enter a natural number." << endl;
            i--;
        }
        else {
            product *= number;
        }
    }

    cout << "Product of the entered numbers: " << product << endl;
}

void pz3()
{
    double a, b, h;

    cout << "Enter the beginning: ";
    cin >> a;
    cout << "Enter the end: ";
    cin >> b;
    cout << "Enter the step: ";
    cin >> h;

    cout << "-------------------" << endl;
    cout << "    X   :     Y    " << endl;
    cout << "-------------------" << endl;

    auto f = [](double x) -> double {
        return sqrt(cos(x)) + sin(x);
        };

    for (double x = a; x <= b; x += h) {
        double y = f(x);

        if (std::isnan(y)) {
            cout << "Number x = " << x << " is not within the function" << endl;
        }
        else {
            cout << setw(8) << fixed << setprecision(2) << x << " : " << setw(8) << fixed << setprecision(2) << y << endl;
        }
    }

    cout << "-------------------" << endl;
}

int main()
{
    pz3();
}
