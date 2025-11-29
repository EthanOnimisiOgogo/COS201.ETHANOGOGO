#include <iostream>
using namespace std;

int main() {
    cout << "Interest calculation program" << endl;

    double balance, rate;
    
    cout << "Enter starting balance: ";
    cin >> balance;

    cout << "Enter annual interest rate: ";
    cin >> rate;

    double newBalance = balance + (balance * rate / 100);

    cout << "Balance after one year = " << newBalance << endl;

    return 0;
}
