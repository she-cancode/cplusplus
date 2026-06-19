#include <iostream>
#include <string>

using namespace std;

int main() {
    const int DAYS_IN_WEEK = 7;
    int attendance[DAYS_IN_WEEK];
    int totalAttendance = 0;
    double averageAttendance = 0.0;
    cout << "--- Gym Weekly Attendance Analysis System ---\n\n";
    // a) Input and Storage
    // Use a loop to prompt the user and store values in an array
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        cout << "Enter the number of members for Day " << (i + 1) << ": ";
        cin >> attendance[i];
    }
    int highestAttendance = attendance[0];
    int lowestAttendance = attendance[0];
    // b) Processing
    // Using a loop to calculate total, highest, and lowest
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        totalAttendance += attendance[i];
        if (attendance[i] > highestAttendance) {
            highestAttendance = attendance[i];
        }
        if (attendance[i] < lowestAttendance) {
            lowestAttendance = attendance[i];
        }
    }
    averageAttendance = static_cast<double>(totalAttendance) / DAYS_IN_WEEK;

    string weekClassification;
    if (averageAttendance >= 80) {
        weekClassification = "Busy";
    } else {
        weekClassification = "Slow";
    }
    // c) Output
    // Display all the calculated data
    cout << "\n--- Weekly Summary Report ---\n";
    cout << "Total attendance: " << totalAttendance << endl;
    cout << "Average attendance: " << averageAttendance << endl;
    cout << "Highest attendance: " << highestAttendance << endl;
    cout << "Lowest attendance: " << lowestAttendance << endl;
    cout << "Week classification: " << weekClassification << endl;

    return 0;
}