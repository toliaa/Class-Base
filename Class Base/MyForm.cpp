#include "MyForm.h"
#include <iostream>
#include <string>

using namespace std;

// Base class
class Base {
public:
    // Virtual function to be overridden
    virtual void myname() {
        cout << "This is class Base" << endl;
    }
};

// Derived class DerA from Base
class DerA : public Base {
public:
    // Override the myname function
    void myname() override {
        cout << "This is class DerA" << endl;
    }
};

// Derived class DerB from Base
class DerB : public Base {
public:
    // Override the myname function
    void myname() override {
        cout << "This is class DerB" << endl;
    }
};

// Derived class DerAB from DerA and DerB
class DerAB : public virtual DerA, public virtual DerB {
public:
    // Override the myname function
    void myname() override {
        cout << "This is class DerAB" << endl;
    }
};

int main() {
    // 1. Create objects for each class in the hierarchy
    Base baseObj;
    DerA derAObj;
    DerB derBObj;
    DerAB derABObj;

    // 2. Call the myname function for each object
    cout << "Calling myname for Base:" << endl;
    baseObj.myname();

    cout << "\nCalling myname for DerA:" << endl;
    derAObj.myname();

    cout << "\nCalling myname for DerB:" << endl;
    derBObj.myname();

    cout << "\nCalling myname for DerAB:" << endl;
    derABObj.myname();

    // 3. Create an array of pointers to the base class in the hierarchy
    Base* array[4];

    // 4. Create dynamic objects for each class in the hierarchy and call the myname function
    array[0] = new Base();
    array[1] = new DerA();
    array[2] = new DerB();
    array[3] = new DerAB();

    cout << "\nCalling myname for objects through pointers:" << endl;
    for (int i = 0; i < 4; ++i) {
        array[i]->myname();
    }

    // 5. Free memory from dynamically created objects
    for (int i = 0; i < 4; ++i) {
        delete array[i];
    }

    return 0;
}


