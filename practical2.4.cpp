#include <iostream>
#include <string>

using namespace std;

class InventoryItem {
private:
    int itemID;
    string itemName;
    double price;
    int quantity;

public:
    InventoryItem() : itemID(0), itemName("Unknown"), price(0.0), quantity(0) {}

    InventoryItem(int id, string name, double p, int qty)
        : itemID(id), itemName(name), price(p), quantity(qty) {}

    void addStock(int qty) {
        if (qty > 0) {
            quantity += qty;
            cout << qty << " units added to " << itemName << ". New stock: " << quantity << endl;
        } else {
            cout << "Invalid quantity to add!" << endl;
        }
    }

    bool sellItem(int qty) {
        if (qty <= 0) {
            cout << "Invalid quantity to sell!" << endl;
            return false;
        } else if (qty > quantity) {
            cout << "Not enough stock to complete the sale. Available stock: " << quantity << endl;
            return false;
        } else {
            quantity -= qty;
            cout << qty << " units of " << itemName << " sold. Remaining stock: " << quantity << endl;
            return true;
        }
    }

    void displayItem() const {
        cout << "Item ID: " << itemID << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity in stock: " << quantity << endl;
    }
};

int main() {
    InventoryItem item1;
    InventoryItem item2(101, "Laptop", 799.99, 50);
    InventoryItem item3(102, "Headphones", 49.99, 200);

    cout << "Initial Inventory:" << endl;
    item1.displayItem();
    item2.displayItem();
    item3.displayItem();

    item1.addStock(30);
    item2.sellItem(20);
    item3.sellItem(50);

    cout << "\nUpdated Inventory:" << endl;
    item1.displayItem();
    item2.displayItem();
    item3.displayItem();

    return 0;
}
