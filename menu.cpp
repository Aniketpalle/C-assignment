#include <iostream>
#include <iomanip>

using namespace std;

// Function to display the menu
void showMenu() {
    cout << "\n--- Banking Menu ---\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\nChoice: ";
}

int main() {
    double balance = 1000.0;
    int option;
    double amount;

    // do-while loop to repeat menu
    do {
        showMenu();
        cin >> option;

        // switch-case to handle options
        switch (option) {
            case 1:
                cout << fixed << setprecision(2) << "Balance: $" << balance << endl;
                break;
            case 2:
                cout << "Deposit: $"; cin >> amount;
                if (amount > 0) balance += amount;
                else cout << "Invalid amount.\n";
                break;
            case 3:
                cout << "Withdraw: $"; cin >> amount;
                if (amount > 0 && amount <= balance) balance -= amount;
                else cout << "Invalid/Insufficient funds.\n";
                break;
            case 4:
                cout << "Exiting.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (option != 4);

    return 0;
}
