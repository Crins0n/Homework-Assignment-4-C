#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

double checking_balance = 2500.00, savings_balance = 1000.00, savings_amount, checking_amount;

int menu;

int main() {
  do {
    cout << std::fixed << std::setprecision(2);
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
      int savings_menu;
      do {
        cout << "\t\tSavings Account\n\n";
        cout << "Please enter a menu item (1-3) >\n";
        cout << "*********************************\n";
        cout << "1. Withdrawal\n";
        cout << "2. Deposit\n";
        cout << "3. Quit\n";
        cout << "\n\n";
        cin >> savings_menu;

        if (savings_menu == 1) {
          cout << "How much would you like to withdraw from your savings "
                  "account: ";
          cin >> savings_amount;
          while (savings_amount <= 0) {
            cout << "Please enter an amount greater than 0: ";
            cin >> savings_amount;
          }
          savings_balance -= savings_amount;
          cout << "Your Savings Account Balance: " << savings_balance << "\n\n";
        }

        if (savings_menu == 2) {
          cout << "How much would you like to deposit into your savings "
                  "account: ";
          cin >> savings_amount;
          while (savings_amount <= 0) {
            cout << "Please enter an amount greater than 0: ";
            cin >> savings_amount;
          }
          savings_balance += savings_amount;
          cout << "Your Savings Account Balance: " << savings_balance << "\n\n";
        }

        if (savings_menu < 1 || savings_menu > 3) {
          cout << "You have entered an invalid option.\n";
          cout << "Please enter a number 1-3 > ";
          cin >> savings_menu;
        }

      } while (savings_menu != 3);
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
  } while (menu != 3);
}