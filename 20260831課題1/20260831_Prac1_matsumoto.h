#pragma once
#include<String>
using namespace std;

class BankAccount
{
private:
    std::string accountHolder; // 口座名義人
    double balance;            // 残高

public:
    //アカウント情報
    BankAccount(const string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {}

    //取得
    double getBalance() const;
    //預金
    void deposit(double amount);
    //引き出し
    void withdraw(double amount);
    //アカウント情報を表示
    void displayAccountInfo() const;
};