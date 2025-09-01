#include <iostream>
#include <string>
using namespace std;

// Restaurant struct
struct Restaurant
{
    string name;              // The name of the restaurant
    string address;           // The address of the restaurant
    string contactNumber;     // The contact number 
    string email;             // The contact email
    double rating;            // The rating of the restaurant
    int yearEstablished;      // The year the restaurant was established
};

// Function prototypes 
Restaurant consoleInput();             // Let user input the data for the Restaurant struct object

void displayStruct(Restaurant res);    // Display the data of the struct

// Main function
int main()
{
    // Let the user enter the struct

    return 0;
}

// Function implementation
Restaurant consoleInput()
{
    // Create a temporary Restaurant struct 
    Restaurant res;

    // Get the Restaurant's name 
    cout << "Enter the Restaurant's name: ";
    getline(cin, res.name);

    // Get the Restaurant's address
    cout << "Enter the Restaurant's address: ";
    getline(cin, res.address);

    // Get the Restaurant's contact number
    cout << "Enter the Restaurant's contact number: ";
    getline(cin, res.contactNumber);

    // Get the Restaurant's email
    cout << "Enter the Restaurant's email: ";
    getline(cin, res.email);

    // Get the Restaurant's rating
    cout << "Enter the Restaurant's rating: ";
    cin >> res.rating;
    cin.ignore(1000, 10);

    // Get the Restaurant's established year
    cout << "Enter the Restaurant's established year: ";
    cin >> res.yearEstablished;
    cin.ignore(1000, 10);

    // Return the Restaurant struct object
    return res;
}

void displayStruct(Restaurant res)
{

}