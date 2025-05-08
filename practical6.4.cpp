// This program is prepared by 24CE043_Dev

#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Base class constructor
    Base()
    {
        cout << "Base constructor\n";
    }

    // Base class virtual destructor
    virtual ~Base()
    {
        cout << "Base destructor\n";
    }
};

// Derived class inheriting from Base
class Derived : public Base
{
private:
    int* data; // Pointer to dynamically allocated array

public:
    // Derived class constructor
    Derived()
    {
        data = new int[100]; // Allocate memory for 100 integers
        cout << "Derived constructor\n";
    }

    // Derived class destructor
    ~Derived()
    {
        delete[] data; // Free allocated memory
        cout << "Derived destructor\n";
    }
};

int main()
{
    // Create a Derived object but assign it to a Base class pointer
    Base* obj = new Derived();

    cout << "\n24CE045_Kalp\n";

    // Delete the object
    // Because Base class destructor is virtual, Derived class destructor will also be called correctly
    delete obj;

    return 0;
}
