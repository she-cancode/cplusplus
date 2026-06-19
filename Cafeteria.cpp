#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct MenuItem {
    string name;
    double price;
};

int main() {
    MenuItem menu[] = {
        {"Chicken Burger", 85.00},
        {"Beef Burger", 95.00},
        {"Veggie Wrap", 70.00},
        {"French Fries", 40.00},
        {"Soft Drink", 25.00},
        {"Milkshake", 45.00},
        {"Pizza Slice", 60.00},
        {"Salad Bowl", 75.00}
    };

    string name, surname;
    double totalCost = 0.0;
    int itemsOrdered = 0;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student surname: ";
    cin >> surname;
    cout << "\n" << setfill('=') << setw(30) << "" << endl;
    cout << "      CAFETERIA MENU" << endl;
    cout << setfill('=') << setw(30) << "" << setfill(' ') << endl;

    for (int i = 0; i < 8; i++) {
        cout << i + 1 << ". " << left << setw(18) << menu[i].name
             << "R" << fixed << setprecision(2) << menu[i].price << endl;
    }
    cout << "==============================" << endl;

    while (true) {
        int choice = -1;
        int qty = 0;

        cout << "\nItems currently in cart: " << itemsOrdered << "/10. (Max is 10)" << endl;
        cout << "Enter item number 1-8 (or 0 to finish): ";

        while (!(cin >> choice) || (choice < 0 || choice > 8)) {
            cout << "Invalid. Enter 1-8 (or 0 to finish): ";
            cin.clear();
            while (cin.get() != '\n');
        }

        if (choice == 0) break;

        cout << "Quantity for " << menu[choice - 1].name << ": ";
        while (!(cin >> qty) || qty <= 0) {
            cout << "Quantity must be a positive integer: ";
            cin.clear();
            while (cin.get() != '\n');
        }


        if (itemsOrdered + qty > 10) {
                cout << "\nERROR: You can only add " << (10 - itemsOrdered) << " more items to your cart." << endl;
                continue;
        }



        totalCost += (menu[choice - 1].price * qty);
        itemsOrdered += qty;

        if (itemsOrdered == 10) {
            cout << "\nCart is full (10/10). Proceeding to checkout..." << endl;
            break;
        }
    }

    double discount = 0.0;
    if (totalCost > 300.0) {
        discount = totalCost * 0.05;
    }

    double finalAmount = totalCost - discount;

    cout << "\n\n" << setfill('*') << setw(35) << "" << endl;
    cout << "          FINAL RECEIPT" << endl;
    cout << setfill('*') << setw(35) << "" << setfill(' ') << endl;
    cout << "STUDENT: " << name << " " << surname << endl;
    cout << "-----------------------------------" << endl;
    cout << left << setw(22) << "Subtotal:" << "R" << right << setw(8) << totalCost << endl;
    cout << left << setw(22) << "Discount (5%):" << "R" << right << setw(8) << discount << endl;
    cout << "-----------------------------------" << endl;
    cout << left << setw(22) << "TOTAL AMOUNT:" << "R" << right << setw(8) << finalAmount << endl;
    cout << setfill('*') << setw(35) << "" << endl;

    return 0;
}
