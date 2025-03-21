#include <iostream>
using namespace std;

int main() {
    // Vacation location menu
    int vacation_choice;
    double airfare;
    string carrier;
    const double UNDERAGE_DISCOUNT = 0.25;

    cout << "Choose your summer vacation destination:" << endl;
    cout << "1. Hawaii" << endl;
    cout << "2. Bahamas" << endl;
    cin >> vacation_choice;

    if (vacation_choice == 1) {
        cout << "You have chosen Hawaii." << endl;
    }
    else if (vacation_choice == 2) {
        cout << "You have chosen Bahamas." << endl;
    }
    else {
        cout << "Invalid choice. Please select 1 or 2." << endl;
        return 0;
    }

    // Airline ticket menu
    int airline_choice;
    cout << "Select your airline:" << endl;
    cout << "1. US Air" << endl;
    cout << "2. Delta" << endl;
    cin >> airline_choice;

    switch (airline_choice) {
    case 1:
        carrier = "US Air";
        break;
    case 2:
        carrier = "Delta";
        break;
    default:
        cout << "Invalid choice. Please select 1 or 2." << endl;
        return 0;
    }

    cout << "Enter the air fare for a round trip: ";
    cin >> airfare;

    // Number of passengers menu
    int num_passengers;
    cout << "Select the number of passengers:" << endl;
    cout << "1. One person" << endl;
    cout << "2. Two persons" << endl;
    cout << "3. Three persons" << endl;
    cout << "4. Four persons" << endl;
    cin >> num_passengers;

    int num_underage;
    double total_adult_cost, total_child_cost, total_cost;

    switch (num_passengers) {
    case 1:
        cout << "Enter the number of passengers who are underage of 18: ";
        cin >> num_underage;
        total_adult_cost = airfare;
        total_child_cost = airfare * UNDERAGE_DISCOUNT;
        total_cost = total_adult_cost + total_child_cost;
        break;
    case 2:
        cout << "Enter the number of passengers who are underage of 18: ";
        cin >> num_underage;
        total_adult_cost = airfare * 2;
        total_child_cost = airfare * UNDERAGE_DISCOUNT * 2;
        total_cost = total_adult_cost + total_child_cost;
        break;
    case 3:
        cout << "Enter the number of passengers who are underage of 18: ";
        cin >> num_underage;
        total_adult_cost = airfare * 3;
        total_child_cost = airfare * UNDERAGE_DISCOUNT * 3;
        total_cost = total_adult_cost + total_child_cost;
        break;
    case 4:
        cout << "Enter the number of passengers who are underage of 18: ";
        cin >> num_underage;
        total_adult_cost = airfare * 4;
        total_child_cost = airfare * UNDERAGE_DISCOUNT * 4;
        total_cost = total_adult_cost + total_child_cost;
        break;
    default:
        cout << "Invalid choice. Please select 1, 2, 3, or 4." << endl;
        return 0;
    }

    // Output results
    cout << "Vacation location: " << vacation_choice << endl;
}