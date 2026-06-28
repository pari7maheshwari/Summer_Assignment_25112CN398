#include <iostream>
using namespace std;

int main() {
    int availableSeats = 50;
    int tickets;

    cout << "===== Ticket Booking System =====\n";

    cout << "Available Seats: " << availableSeats << endl;

    cout << "Enter number of tickets to book: ";
    cin >> tickets;

    if (tickets <= availableSeats) {
        availableSeats -= tickets;

        cout << "Booking successful.\n";
        cout << "Tickets booked: " << tickets << endl;
        cout << "Remaining seats: " << availableSeats << endl;
    }
    else {
        cout << "Sorry! Not enough seats available.\n";
    }

    return 0;
}