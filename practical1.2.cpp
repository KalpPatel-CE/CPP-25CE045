#include <iostream>
#include <string>

using namespace std;

class Inventory {
private:
    int productID[100];
    string name[100];
    int quantity[100];
    double price[100];
    int productCount = 0;

public:
    void addProduct(int id, const string& productName, int qty, double productPrice)
    {
        if (productCount < 100)
        {
            productID[productCount] = id;
            name[productCount] = productName;
            quantity[productCount] = qty;
            price[productCount] = productPrice;
            productCount++;
        }
        else
        {
            cout << "Inventory is full." << endl;
        }
    }

    void updateQuantity(int id, int newQty)
    {
        for (int i = 0; i < productCount; i++)
        {
            if (productID[i] == id)
            {
                quantity[i] += newQty;
                cout << "Quantity updated for " << name[i] << " to " << newQty << endl;
                return;
            }
        }
        cout << "Product ID not found!" << endl;
    }

    double calculateTotalValue()
    {
        double totalValue = 0.0;
        for (int i = 0; i < productCount; i++)
        {
            totalValue += quantity[i] * price[i];
        }
        return totalValue;
    }

    void displayInventory()
    {
        cout << "Inventory List:\n";
        for (int i = 0; i < productCount; i++)
        {
            cout << "ID: " << productID[i] << ", Name: " << name[i]
                 << ", Quantity: " << quantity[i] << ", Price: ₹" << price[i] << endl;
        }
    }
};

int main()
{
    Inventory store;
    int choice;
    int id, qty;
    double price;
    string name;

    while (1)
    {
        cout << "\n1. Add Product\n2. Update Quantity\n3. Display Inventory\n4. Calculate Total Value\n5. Exit\n"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter product ID: ";
                cin >> id;
                cout << "Enter product name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter quantity: ";
                cin >> qty;
                cout << "Enter price: ₹";
                cin >> price;
                store.addProduct(id, name, qty, price);
                break;
            case 2:
                cout << "Enter product ID to update quantity: ";
                cin >> id;
                cout << "Enter positive to add nedative to reduce quantity: ";
                cin >> qty;
                store.updateQuantity(id, qty);
                break;
            case 3:
                store.displayInventory();
                break;
            case 4:
                cout << "Total value of inventory: ₹" << store.calculateTotalValue() << endl;
                break;
            case 5:
                cout<<"\n24CE045_kalp\n";
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
}
