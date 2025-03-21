#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>

using namespace std;

// Function to get the current date in MM/DD/YY format
string getCurrentDate() {
    time_t now = time(0);  // Get the current time
    tm ltm;                // Create a tm structure
    localtime_s(&ltm, &now); // Use localtime_s to get local time

    // Format the date as MM/DD/YY
    stringstream ss;
    ss << setw(2) << setfill('0') << (ltm.tm_mon + 1) << "/"  // Month
        << setw(2) << setfill('0') << ltm.tm_mday << "/"       // Day
        << setw(2) << setfill('0') << (ltm.tm_year + 1900) % 100;  // Year
    return ss.str();
}

// Function to display account summary
void displayAccountSummary(const string& customerID) {
    string filename = "C:\\cpp\\Cust_" + customerID + ".dat";
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Unable to open the file for customer ID " << customerID << endl;
        return;
    }

    string line;
    string name;
    double totalBalance = 0.0;

    // Read customer name
    getline(file, name);
    cout << "Customer Name: " << name << endl;
    cout << "Transaction History:" << endl;

    // Read transaction records
    while (getline(file, line)) {
        stringstream ss(line);
        string date;
        double amount;

        ss >> date >> amount; // Read date and amount
        totalBalance += amount; // Calculate total balance

        cout << date << "\t" << fixed << setprecision(2) << amount << endl;
    }

    file.close();
    cout << "Total Account Balance: $" << fixed << setprecision(2) << totalBalance << endl;
}

// Function to deposit amount
void depositAmount(const string& customerID) {
    string filename = "C:\\cpp\\Cust_" + customerID + ".dat";
    ofstream file(filename, ios::app); // Open file in append mode

    if (!file.is_open()) {
        cout << "Unable to open the file for customer ID " << customerID << endl;
        return;
    }

    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Deposit amount must be positive." << endl;
        return;
    }

    // Write the transaction to the file
    file << getCurrentDate() << "\t" << fixed << setprecision(2) << amount << endl;
    file.close();

    cout << "Deposit successful!" << endl;
    displayAccountSummary(customerID); // Display updated account information
}

// Function to withdraw amount
void withdrawAmount(const string& customerID) {
    string filename = "C:\\cpp\\Cust_" + customerID + ".dat";
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Unable to open the file for customer ID " << customerID << endl;
        return;
    }

    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Withdrawal amount must be positive." << endl;
        return;
    }

    double totalBalance = 0.0;
    string line;

    // Calculate current balance
    while (getline(file, line)) {
        stringstream ss(line);
        string date;
        double transAmount;
        ss >> date >> transAmount;
        totalBalance += transAmount;
    }

    if (totalBalance < amount) {
        cout << "Error: Withdrawal amount exceeds account balance." << endl;
        file.close();
        return;
    }

    file.close();

    // Append withdrawal transaction to the file
    ofstream outFile(filename, ios::app);
    outFile << getCurrentDate() << "\t" << fixed << setprecision(2) << -amount << endl;
    outFile.close();

    cout << "Withdrawal successful!" << endl;
    displayAccountSummary(customerID); // Display updated account information
}

// Main function
int main() {
    while (true) {
        cout << "Menu:\n";
        cout << "1. Display Account Summary\n";
        cout << "2. Deposit Amount\n";
        cout << "3. Withdraw Amount\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 4) {
            break; // Exit the program
        }

        string customerID;
        cout << "Enter 3-digit Customer ID: ";
        cin >> customerID;

        switch (choice) {
        case 1:
            displayAccountSummary(customerID);
            break;
        case 2:
            depositAmount(customerID);
            break;
        case 3:
            withdrawAmount(customerID);
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
