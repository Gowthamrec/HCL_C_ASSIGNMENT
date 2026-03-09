#include <iostream>
using namespace std;

class Wallet {
private:
    double balance;

public:
    Wallet(double b) : balance(b) {}

    void deposit(double amount) {
        if (amount <= 0) { cout << "Invalid deposit." << endl; return; }
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0 || amount > balance) { cout << "Invalid withdrawal." << endl; return; }
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }

    friend class WalletAuditor;
};

class WalletAuditor {
public:
    void report(const Wallet &w) {
        cout << "--- Audit Report ---" << endl;
        cout << "Balance: " << w.balance << endl;
    }
};

class ThirdClass {
public:
    void tryAccess(const Wallet &w) {
        cout << "ThirdClass cannot access Wallet's private balance." << endl;
    }
};

int main() {
    Wallet w(500);
    w.deposit(200);
    w.withdraw(100);

    WalletAuditor auditor;
    auditor.report(w);

    ThirdClass tc;
    tc.tryAccess(w);
    return 0;
}
