#include <iostream>
#include <string>
#include"20260831_Prac1_matsumoto.h"

    //取得
    double BankAccount::getBalance() const 
    {
        return balance;
    }
 
    //預金
    void BankAccount::deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        }
        else 
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    //引き出し
    void BankAccount::withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        }
        else
        {
            cout << "Invalid withdraw amount or insufficient funds.\n";
        }
    }

    //アカウント情報
    void BankAccount::displayAccountInfo() const
    {
        cout << "Account Holder: " << accountHolder << "\n"
            << "Current Balance: " << balance << "\n";
    }

//メイン
int main() {
    BankAccount account("Alice", 5000.0);//アカウント名

    account.displayAccountInfo(); //アカウント情報

    account.deposit(1000.0); //1000円を預金
    account.withdraw(2000.0); //2000円を引き出し
    account.withdraw(5000.0); // 残高不足で失敗

    account.displayAccountInfo();//アカウント情報

    return 0;
}