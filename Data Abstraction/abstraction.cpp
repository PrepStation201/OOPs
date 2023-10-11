#include <iostream>
using namespace std;

class Rectangle {
private:
    double ht;
    double wdt;

public:
    // constructor
    Rectangle(double h, double w) : ht(h), wdt(w) {}

    
    double getht() const {
        return ht;
    }

    double getwdt() const {
        return wdt;
    }

    double area() const {
        return ht * wdt;
    }

    double perimeter() const {
        return 2 * (ht + wdt);
    }

    // providing controlled access through member functions, 
    // the implementation details are hidden from the user. 
    // This achieves data abstraction
    void setht(double h) {
        ht = h;
    }

    void setwdt(double w) {
        wdt = w;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);

    cout << "ht: " << rect.getht() << " units" << endl;
    cout << "wdt: " << rect.getwdt() << " units" << endl;
    cout << "Area: " << rect.area() << " square units" << endl;
    cout << "Perimeter: " << rect.perimeter() << " units" << endl;

    rect.setht(7.0);
    rect.setwdt(4.0);

    cout << "\nAfter modification:" << endl;
    cout << "ht: " << rect.getht() << " units" << endl;
    cout << "wdt: " << rect.getwdt() << " units" << endl;
    cout << "Area: " << rect.area() << " square units" << endl;
    cout << "Perimeter: " << rect.perimeter() << " units" << endl;

    return 0;
}
