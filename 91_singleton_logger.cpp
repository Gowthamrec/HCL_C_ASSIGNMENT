#include <iostream>
#include <string>
using namespace std;

class Logger {
private:
    static Logger *instance;
    Logger() {}

public:
    static Logger* getInstance() {
        if (!instance)
            instance = new Logger();
        return instance;
    }

    void logMessage(const string &msg) {
        cout << "[LOG] " << msg << endl;
    }
};

Logger* Logger::instance = nullptr;

int main() {
    Logger::getInstance()->logMessage("Application started.");
    Logger::getInstance()->logMessage("Processing data...");
    Logger::getInstance()->logMessage("Application ended.");

    cout << "Same instance? " << (Logger::getInstance() == Logger::getInstance() ? "Yes" : "No") << endl;
    return 0;
}
