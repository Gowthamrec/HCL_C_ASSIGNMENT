#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Observer {
public:
    virtual void update(double price) = 0;
    virtual ~Observer() {}
};

class TradingApp : public Observer {
    string name;
public:
    TradingApp(string n) : name(n) {}
    void update(double price) override {
        cout << name << " notified. New price: $" << price << endl;
    }
};

class StockNotifier {
    double price;
    vector<Observer*> observers;
public:
    void subscribe(Observer *o) { observers.push_back(o); }

    void setPrice(double p) {
        price = p;
        for (auto o : observers) o->update(price);
    }
};

int main() {
    StockNotifier notifier;
    TradingApp app1("App A"), app2("App B"), app3("App C");
    notifier.subscribe(&app1);
    notifier.subscribe(&app2);
    notifier.subscribe(&app3);

    notifier.setPrice(150.0);
    notifier.setPrice(175.5);
    return 0;
}
