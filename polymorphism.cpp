#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay(double amount) {
        cout << "Processing a general payment." << endl;
    }

    virtual ~Payment() {}
};

class CashPayment : public Payment {
public:
    void pay(double amount) override {
        cout << "Paid UGX " << amount
             << " using cash." << endl;
    }
};

class MobileMoney : public Payment {
public:
    void pay(double amount) override {
        cout << "Paid UGX " << amount
             << " using mobile money." << endl;
    }
};

int main() {
    CashPayment cash;
    MobileMoney mobile;

    Payment* payment;

    payment = &cash;
    payment->pay(10000);

    payment = &mobile;
    payment->pay(20000);

    return 0;
}
