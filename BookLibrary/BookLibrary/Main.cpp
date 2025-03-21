#include "Book.h"
#include <limits> // For numeric_limits

int main() {
    int size;
    cout << "How many books would you like this library to hold?" << endl;
    cin >> size;

    while (size <= 0) { // Check for invalid size
        cout << "ERROR! Please enter a positive value for size of library." << endl;
        cin.clear(); // Clear input flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear invalid input
        cin >> size;
    }

    Book* library = new Book[size]; // Dynamic Array of Books!
    cin.ignore(); // Clear buffer before getline

    // Add Books to the library
    for (int i = 0; i < size; i++) {
        string title, author;
        int year;

        cout << "\nEnter details for book #" << i + 1 << ":" << endl;
        cout << "What is the title?" << endl;
        getline(cin, title); // Get the full title
        cout << "Who is the author?" << endl;
        getline(cin, author); // Get the full author name
        cout << "What year was it published?" << endl;
        cin >> year;
        cin.ignore(); // Clear the buffer after reading year

        library[i].setTitle(title);
        library[i].setAuthor(author);
        library[i].setYear(year);
    }

    // Display all books
    cout << "\nLibrary Collection:\n";
    for (int i = 0; i < size; i++) {
        cout << "Book " << i + 1 << ":" << endl;
        library[i].displayInfo();
        cout << endl;
    }

    delete[] library; // Free allocated memory
    library = nullptr;

    return 0;
}
