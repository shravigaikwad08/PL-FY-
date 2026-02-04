#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    float billingAmount;
    string appointmentDate;

public:
    Patient() {
        billingAmount = 0.0;
        appointmentDate = "Not Assigned";
    }

    Patient(float amount, string date) {
        billingAmount = amount;
        appointmentDate = date;
    }

    Patient(const Patient &p) {
        billingAmount = p.billingAmount;
        appointmentDate = p.appointmentDate;
    }

    void displayDetails() {
        cout << "Billing Amount: ₹" << billingAmount << endl;
        cout << "Appointment Date: " << appointmentDate << endl;
    }
};

int main() {
    Patient p1;
    p1.displayDetails();

    cout << endl;

    Patient p2(2500.50, "05-02-2026");
    p2.displayDetails();

    cout << endl;

    Patient p3(p2);
    p3.displayDetails();

    return 0;
}
