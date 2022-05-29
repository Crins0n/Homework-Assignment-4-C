#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

double checking_balance = 2500.00, savings_balance = 1000.00;

int menu;

int main() {

  cout << "\n";
  cout << "\tWelcome to Seabreeze Bank\n";
  cout << "*********************************\n\n";
  cout << "1. Savings Account\n";
  cout << "2. Checking Account\n";
  cout << "3. Quit\n\n";
  cin >> menu;
  cout << "\n\n";

  if (menu < 1 || menu > 3) {
    cout << "You have entered an invalid option.\n";
    cout << "Please enter a number 1-3 > ";
    cin >> menu;
    cout << "\n\n";
  }

  switch (menu) {
  case 1:
    cout << "\t\tSavings Account\n\n";
    cout << "Please enter a menu item (1-3) >\n";
    cout << "*********************************\n";
    cout << "1. Withdrawal\n";
    cout << "2. Deposit\n";
    cout << "3. Quit\n";

    break;

  case 2:
    cout << "\t\tChecking Account\n\n";
    cout << "Please enter a menu item (1-3) >\n";
    cout << "*********************************\n";
    cout << "1. Withdrawal\n";
    cout << "2. Deposit\n";
    cout << "3. Quit\n";

    break;

  case 3:
    cout << "Thank you for banking with Seabreeze";
  }
}