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

int main()
{

    return 0;
}