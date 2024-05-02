#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class BankAccount {
private:
    string name;
    double balance;
    int accountNumber;

    public:
    
    BankAccount() {}

    BankAccount(string n, double b) : name(n), balance(b) {
       
        srand((unsigned int)time(0));
        accountNumber = rand();
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. Current balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }
    
    int getAccountNumber() {
        return accountNumber;
    }
};

int main() {
    const int MAX_ACCOUNTS = 10;
    BankAccount* accounts[MAX_ACCOUNTS];
    int numAccounts = 0;

    cout << "Welcome to Chase" << endl;
    cout << "Type a number to perform the following actions:" << endl;

    int choice;
    do {
        cout << "1. Create a new bank account with an initial balance" << endl;
        cout << "2. Deposit money into an account" << endl;
        cout << "3. Withdraw money from an account" << endl;
        cout << "4. Display the current balance of an account" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                double initialBalance;
                cout << "Enter your name: ";
                cin >> name;
                cout << "Enter initial balance: ";
                cin >> initialBalance;
                accounts[numAccounts] = new BankAccount(name, initialBalance);
                cout << "Account created successfully." << endl;
                cout << "Account number: " << accounts[numAccounts]->getAccountNumber() << endl;
                accounts[numAccounts]->displayBalance();
                numAccounts++;
                break;
            }
            case 2: {
                int accountNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
                bool found = false;
                for (int i = 0; i < numAccounts; i++) {
                    if (accounts[i]->getAccountNumber() == accountNumber) {
                        double depositAmount;
                        cout << "Enter deposit amount: ";
                        cin >> depositAmount;
                        accounts[i]->deposit(depositAmount);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            case 3: {
                int accountNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
                bool found = false;
                for (int i = 0; i < numAccounts; i++) {
                    if (accounts[i]->getAccountNumber() == accountNumber) {
                        double withdrawAmount;
                        cout << "Enter withdrawal amount: ";
                        cin >> withdrawAmount;
                        accounts[i]->withdraw(withdrawAmount);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            case 4: {
                int accountNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
                bool found = false;
                for (int i = 0; i < numAccounts; i++) {
                    if (accounts[i]->getAccountNumber() == accountNumber) {
                        accounts[i]->displayBalance();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            case 0:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
    
    for (int i = 0; i < numAccounts; i++) {
        delete accounts[i];
    }

    return 0;
}
