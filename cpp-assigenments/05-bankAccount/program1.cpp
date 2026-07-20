/*
create a class BankAccount with private member balance and public member function
deposit() and getBalance(). Ensure balance cannot be directly accessed from outside the class

author: munja pawar
*/

#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount()
    {
        balance = 0.0f;
    }

    double getBalance()
    {
        return balance;
    }

    double deposit(double amount)
    {
        if (amount < 0.0f)
            return -1;

        return balance += amount;
    }

    double withdraw(double amount)
    {
        if (balance <= 0.0f)
        {
            cout << "Insufficient balance..!" << endl;
            return -1;
        }

        return balance -= amount;
    }
};

void bankAccount();

int main()
{
    bankAccount();

    return 0;
}

void bankAccount()
{
    BankAccount account;
    double addAmount = 0.0f;
    double withdrawAmmount = 0.0f;
    int choice;

   
    while (1)
    {
        cout << "\nchoose from below options:\n";
        cout << "1. show Balance\n2. add amount\n3. withdraw amount\n4. Exit\n>";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "current balance is: ";
            cout << account.getBalance() << endl;
            break;
        case 2:
            cout << "Add amount: ";
            cin >> addAmount;
            account.deposit(addAmount);
            break;
        case 3:
            cout << "withdraw amount: ";
            cin >> withdrawAmmount;
            account.withdraw(withdrawAmmount);
            break;
        case 4:
            cout << "\nThank You for Using Application...";
            return;
            break;
        default:
            cout << "please choose valid choice!\n";
            break;
        }
    }
}
