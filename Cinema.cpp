#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

string captureName() {
    string name;
    cout << "Enter customer full name: ";
    getline(cin, name);
    return name;
}

// Function to input and validate the number of tickets
int getNumberOfTickets() {
    int num;
    cout << "Enter number of tickets: ";
    cin >> num;
    
    while (num <= 0) {
        cout << "Invalid input. Please enter a number greater than 0: ";
        cin >> num;
    }
    return num;
}

// Function to display the ticket menu
void displayMenu() {
    cout << "\n--- Ticket Menu ---\n";
    cout << "1. Standard Ticket - R80\n";
    cout << "2. 3D Movie Ticket - R120\n";
    cout << "3. IMAX Ticket - R150\n";
    cout << "4. VIP Lounge Ticket - R200\n";
}

// Function to validate ticket selections (between 1 and 4)
bool validateSelection(int choice) {
    return (choice >= 1 && choice <= 4);
}

// Function that allows the user to select a ticket type
int selectTicketType(int ticketNumber) {
    int choice;
    cout << "Select ticket type for Ticket " << ticketNumber << ": ";
    cin >> choice;

    // Loop until a valid choice is made
    while (!validateSelection(choice)) {
        cout << "Invalid selection. Please choose an option between 1 and 4: ";
        cin >> choice;
    }
    return choice;
}

// Function to calculate the total cost based on selected tickets
double calculateTotalCost(const vector<int>& ticketTypes) {
    double total = 0.0;
    for (int type : ticketTypes) {
        switch (type) {
            case 1: total += 80.00; break;
            case 2: total += 120.00; break;
            case 3: total += 150.00; break;
            case 4: total += 200.00; break;
        }
    }
    return total;
}

// Function to determine and apply the 12% discount
double calculateDiscount(int numTickets, double totalCost) {
    if (numTickets >= 5 && totalCost > 600.00) {
        return totalCost * 0.12;
    }
    return 0.0;
}

// Function to display the final results clearly
void displayResults(string name, double totalCost, double discount) {
    double finalAmount = totalCost - discount;

    cout << "\n--- Booking Summary ---\n";
    cout << "Customer Name: " << name << "\n";

    // Format output to 2 decimal places for currency
    cout << fixed << setprecision(2);
    cout << "Total Cost: R" << totalCost << "\n";
    cout << "Discount Applied: R" << discount << "\n";
    cout << "Final Amount Payable: R" << finalAmount << "\n";
}
    int main() {
        string customerName = captureName();
        int numTickets = getNumberOfTickets();
        vector<int> ticketSelections(numTickets);

        for (int i = 0; i < numTickets; ++i) {
            displayMenu();
            ticketSelections[i] = selectTicketType(i + 1);
        }

        double totalCost = calculateTotalCost(ticketSelections);
        double discount = calculateDiscount(numTickets, totalCost);

        displayResults(customerName, totalCost, discount);

        return 0;
    }


