#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Setter method to set the name
    void setName(string n) {
        name = n;
    }

    // Getter method to get the name
    string getName() {
        return name;
    }

    // Setter method to set the age
    void setAge(int a) {
        if (a >= 0 && a <= 120) { // Basic age validation
            age = a;
        } else {
            cout << "Invalid age! Setting to default (0)." << endl;
            age = 0;
        }
    }

    // Getter method to get the age
    int getAge() {
        return age;
    }
};

int main() {
    Person person1;

    person1.setName("John Doe");
    person1.setAge(30);

    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;

    return 0;
}
