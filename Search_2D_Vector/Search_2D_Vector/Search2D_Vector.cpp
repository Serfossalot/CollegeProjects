#include <list>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Define the Location struct
struct Location {
    int row;
    int column;
};

// Function to search the 2D vector using any primitive data type
template <typename T>
list<Location> search2D(const vector<vector<T>>& vec, const T& item) {
    list<Location> results; // To store the locations of found items

    // Traverse the 2D vector
    for (int i = 0; i < vec.size(); i++) {        // Outer loop: Iterate through rows
        for (int j = 0; j < vec[i].size(); j++) { // Inner loop: Iterate through columns
            if (vec[i][j] == item) { // If item matches
                results.push_back({ i, j }); // Add row and column to results
            }
        }
    }

    // If no match found, add a "not found" object
    if (results.empty()) {
        results.push_back({ -1, -1 });
    }

    return results;
}

int main() {
    // Initialize a 2D vector
    vector<vector<float>> vec = {
        {1.1, 2.1, 3.1, 4.1}, // 1st Row
        {5.1, 6.1, 7.1, 8.1}  // 2nd Row
    };

    // Item to search for
    float item = 0.0;
    cout << "What value would you like to search for?" << endl;
    cin >> item;

    // Display the contents of the 2D vector
    cout << "Contents of the 2D vector:" << endl;
    for (const auto& row : vec) {
        for (float val : row) {
            cout << setw(5) << val << " ";
        }
        cout << endl;
    }

    
    cout << "\nSearching for: " << item << endl;

    // Call the search2D function
    list<Location> results = search2D(vec, item);

    // Display the results
    if (results.size() == 1 && results.front().row == -1) {
        cout << "Item not found in the 2D vector." << endl;
    }
    else {
        cout << "Item found at:" << endl;
        for (list<Location>::iterator it = results.begin(); it != results.end(); it++) {
            cout << "Row: " << it->row << " Column: " << it->column << endl;
        }
    }

    return 0;
}
