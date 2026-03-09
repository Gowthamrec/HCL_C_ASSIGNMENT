#include <iostream>
#include <string>
using namespace std;

class CryptoBox {
private:
    string privateKey;
    int keyLength;

public:
    CryptoBox(string key) : privateKey(key), keyLength(key.length()) {}

    friend void dumpForAudit(const CryptoBox &box);
};

void dumpForAudit(const CryptoBox &box) {
    cout << "--- Audit Report ---" << endl;
    cout << "Private Key: " << box.privateKey << endl;
    cout << "Key Length:  " << box.keyLength << endl;
}


int main() {
    CryptoBox cb("MySuperSecretKey123");
    dumpForAudit(cb);
    return 0;
}
