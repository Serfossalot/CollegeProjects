#include <iostream>
#include <string>

using namespace std;

int main() {
    // Step 1: Initialize Variables
    string employeeName;
    double hoursWorked, hourlyRate, taxRate;

    // Step 2: Input Employee Data
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    cout << "Enter hourly rate: $";
    cin >> hourlyRate;

    cout << "Enter tax rate (%): ";
    cin >> taxRate;

    // Step 3: Calculate Gross Pay
    double grossPay = hoursWorked * hourlyRate;

    // Step 4: Deduct Taxes
    double taxesDeducted = grossPay * (taxRate / 100);

    // Step 5: Calculate Net Pay
    double netPay = grossPay - taxesDeducted;

    // Step 6: Display Payroll Details
    cout << "\nPayroll Details for " << employeeName << ":\n";
    cout << "Hours Worked: " << hoursWorked << " hours\n";
    cout << "Hourly Rate: $" << hourlyRate << "\n";
    cout << "Gross Pay: $" << grossPay << "\n";
    cout << "Taxes Deducted: $" << taxesDeducted << "\n";
    cout << "Net Pay: $" << netPay << "\n";

    // Step 7: Aggregate Payroll Information (not implemented for a single employee)

    // Step 8: Calculate Total Taxes (not implemented for a single employee)

    // Step 9: Generate Payroll Report (not implemented for a single employee)

    // Step 10: Algorithm End
    return 0;
}