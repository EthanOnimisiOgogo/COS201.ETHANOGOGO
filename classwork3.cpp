#include <iostream>
using namespace std;

int main() {
    cout << "Interest calculation program" << endl;

    double balance, rate;

    cout << "Enter starting balance: ";
    cin >> balance;

    cout << "Enter annual interest rate: ";
    cin >> rate;

    double balanceAfterOneYear = balance + (balance * rate / 100);
    double balanceAfterTwoYears = balanceAfterOneYear + (balanceAfterOneYear * rate / 100);

    cout << "Balance after one year = " << balanceAfterOneYear << endl;
    cout << "Balance after two years = " << balanceAfterTwoYears << endl;

    return 0;
}
