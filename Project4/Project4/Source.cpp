#include <iostream>
#include <string>

using namespace std;
const float DISCOUNT = 0.25;

void calculation(string vacation, string carrier, unsigned int passenger, unsigned int underage, double airfare) {
    double underagefare = (airfare - airfare * DISCOUNT) * underage;
    double adultfare = airfare * (passenger - underage);
    double totalfare = underagefare + adultfare;

    cout << "Vacation location:     " << vacation << endl;
    cout << "Carrier company:       " << carrier << endl;
    cout << "Airfare:              $" << airfare << endl;
    cout << "Airfare for adults:   $" << adultfare << endl;
    cout << "Airfare for underage: $" << underagefare << endl;
    cout << "Total airfare:        $" << totalfare << endl;
}

void calculate_fare(string carrier, double airfare, int passenger) {
    unsigned int underage;
    cout << "Please enter the number of underage passengers" << endl;
    cin >> underage;

    if (underage <= passenger) {
        calculation("Hawaii", carrier, passenger, underage, airfare);
    }
    else {
        cout << "You have entered a wrong underage number. Underage number should be less than the passenger number" << endl;
    }
}

void carrier() {
    string carrier;
    double airfare;

    cout << "Please select your favorite carrier" << endl;
    cout << "1. US Air" << endl;
    cout << "2. Delta" << endl;
    cout << "3. South West" << endl;

    cin >> carrier;

    cout << "Please enter the airfare" << endl;
    cin >> airfare;

    int passenger;
    cout << "Please select the number of passengers for the trip" << endl;
    for (int i = 1; i <= 4; i++) {
        cout << i << endl;
    }

    cin >> passenger;

    calculate_fare(carrier, airfare, passenger);
}



int main()
{
    string vacation;
    int selection;

    cout << "Please select your favorite vacation destination" << endl;
    cout << "1.Hawaii" << endl;
    cout << "2.Bahamas" << endl;
    cout << "3.Cancun" << endl;
    cin >> selection;

    switch (selection)
    {
    case 1:
        vacation = "Hawaii";
        cout << "You just selected the " << vacation << " vacation destination " << endl;
        carrier();
        break;
    case 2:
        vacation = "Bahamas";
        cout << "You just selected the " << vacation << " vacation destination " << endl;
        carrier();
        break;
    case 3:
        vacation = "Cancun";
        cout << "You just selected the " << vacation << " vacation destination " << endl;
        carrier();
        break;
    }

    return 0;
}




