#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

double checking_balance = 2500.00, savings_balance = 1000.00, savings_amount,
       checking_amount;

int menu;

int main() {
  do {
    // Main Menu
    cout << std::fixed << std::setprecision(2);
    cout << "\n";
    cout << "\tWelcome to Seabreeze Bank\n";
    cout << "*********************************\n\n";
    cout << "1. Savings Account\n";
    cout << "2. Checking Account\n";
    cout << "3. Quit\n\n";
    cin >> menu;
    cout << "\n\n";

    // User validation for the Main Menu
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
        // Savings Account Menu
        cout << "\t\tSavings Account\n\n";
        cout << "Please enter a menu item (1-3) >\n";
        cout << "*********************************\n";
        cout << "1. Withdrawal\n";
        cout << "2. Deposit\n";
        cout << "3. Main Menu\n";
        cout << "\n\n";
        cin >> savings_menu;
        cout << "\n";
        // Withdrawal selection for Savings Account
        if (savings_menu == 1) {
          cout << "How much would you like to withdraw from your savings "
                  "account: ";
          cin >> savings_amount;
          if (savings_amount < 0) {
            cout << "Please enter an amount greater than 0: ";
            cin >> savings_amount;
          }
          cout << "\n";
          while (savings_balance < savings_amount) {
            cout << "You do not have enough funds in your account to withdraw "
                    "that much\n";
            cout << "Please enter a smaller amount: ";
            cin >> savings_amount;
            cout << "\n";
          }
          while (savings_amount < 0) {
            cout << "Please enter an amount greater than 0: ";
            cin >> savings_amount;
          }
          savings_balance -= savings_amount;
          cout << "Your Savings Account Balance: " << savings_balance << "\n\n";
          if (savings_balance == 0) {
            cout << "You have zero funds available in your account.\n\n";
          }
        }
        // Deposit selection for Savings Account
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
        // User validation for Savings Menu
        if (savings_menu < 1 || savings_menu > 3) {
          cout << "You have entered an invalid option.\n";
          cout << "Please enter a number 1-3 > ";
          cin >> savings_menu;
        }

      } while (savings_menu != 3);
      break;

    case 2:
      int checking_menu;
      do {
        // Checking Account Menu
        cout << "\t\tChecking Account\n\n";
        cout << "Please enter a menu item (1-3) >\n";
        cout << "*********************************\n";
        cout << "1. Withdrawal\n";
        cout << "2. Deposit\n";
        cout << "3. Main Menu\n";
        cout << "\n\n";
        cin >> checking_menu;
        cout << "\n";

        // Withdrawal Selection for Checking Account
        if (checking_menu == 1) {
          cout << "How much would you like to withdraw from your checking account: ";
          cin >> checking_amount;
          cout << "\n";
          while (checking_balance < checking_amount) {
            cout << "You do not have enough funds in your account to withdraw "
                    "that "
                    "much.\n";
            cout << "Please enter a smaller amount: ";
            cin >> checking_amount;
            cout << "\n";
          }
          while (checking_amount <= 0) {
            cout << "Please enter an amount greater than 0: ";
            cin >> checking_amount;
          }
          checking_balance -= checking_amount;
          cout << "Your Checking Account Balance: " << checking_balance
               << "\n\n";
          if (checking_balance == 0) {
            cout << "You now have zero funds in your Checking Account.\n\n";
          }
        }
        // Deposit Selection for Checking Account
        if (checking_menu == 2) {
          cout << "How much would you like to deposit into your Checking "
                  "Account: ";
          cin >> checking_amount;
          cout << "\n";
          while (checking_amount <= 0) {
            cout << "Please enter an amount greater than 0: ";
            cin >> checking_amount;
          }
          checking_balance += checking_amount;
          cout << "Your Checking Account Balance : " << checking_balance
               << "\n\n";
        }
        // User Validation for Checking Menu
        if (checking_menu < 1 || checking_menu > 3) {
          cout << "You have entered an invalid option.\n";
          cout << "Please enter a number 1-3 > ";
          cin >> checking_menu;
        }

      } while (checking_menu != 3);
      break;

    case 3:
      cout << "Thank you for banking with Seabreeze";
    }
  } while (menu != 3);
}

/*
Variables:

double checking_balance     Starting balance of Checking Account
double savings_balance      Starting balance of Savings Account
double checking_amount      Input from user for Checking Account
withdrawal/deposit double savings_amount       Input from user for Savings
Account withdrawal/deposit int menu                    Used for Main Menu
"switch" statement int savings_menu            Used for Savings Account inputted
menu selections. int checking_menu           Used for Checking Account inputted
menu selections.

Pseudo-Code

1. Enclose entire program in a "do/while" loop to maintain menu functionality.
2. Create "Main Menu".
      Welcome to Seabreeze Bank
      1. Savings Account
      2. Checking Account
      3. Quit
3. Obtain user input for int menu.
4. Validate user input for "Main Menu" using an "if" statement.
5. Create menu selections using a "switch" statement.
6. Case: 1 "Savings Menu"
      1. Withdraw
      2. Deposit
      3. Main Menu
7. Obtain user input for int savings_menu.
8. if (savings_menu == 1)
      Output prompt for withdrawal amount.
      Input double savings_amount.
      Validate withdrawal amount if user does not have enough funds ("while"
loop). Validate that the withdrawal amount is <= 0 ("while" loop).
      savings_balance -= savings_amount
      Output savings_amount
      if savings_balance == 0, out put that user has zero funds left in account.
9. if (savings_menu == 2)
      Ouput prompt for deposit amount.
      Input double savings_amount.
      Validate that the deposit amount is <= 0 ("while" loop).
      savings_balance += savings_amount.
      Output savings_amount.
10. if (savings_menu < 1 || savings_menu > 3)
      Validate savings_menu user input. Prompt for correct selection.
11. Case: 2 "Checking Menu"
      1. Withdraw
      2. Deposit
      3. Main Menu
12. Obtain user input for int checking_menu.
13. if (checking_menu == 1)
      Output prompt for withdrawal amount.
      Input double checking_amount.
      Validate withdrawal amount if user does not have enough funds ("while"
loop). Validate that the withdrawal amount is <= 0 ("while" loop).
      checking_balance -= checking_amount
      Output checking_amount
      if checking_balance == 0, out put that user has zero funds left in
account.
14. if (checking_menu == 2)
      Ouput prompt for deposit amount.
      Input double checking_amount.
      Validate that the deposit amount is <= 0 ("while" loop).
      checking_balance += checking_amount.
      Output checking_amount.
15. if (checking_menu < 1 || checking_menu > 3)
      Validate savings_menu user input. Prompt for correct selection.
16: Case 3: "Thank you for banking with Seabreeze".


*/