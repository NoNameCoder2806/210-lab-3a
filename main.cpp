// COMSC-210 | Lab 3A | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Constants
const int FIELD_WIDTH = 32;
const int CURRENT_YEAR = 2025;

// Restaurant struct
struct Restaurant
{
    string name;              // The name of the restaurant
    string address;           // The address of the restaurant
    string contactNumber;     // The contact number
    double rating;            // The rating of the restaurant (from 0.0 to 5.0)
    string cuisineType;       // The cuisine type (eg. Vietnamese, American, etc)
    string priceRange;        // The price range ($, $$ or $$$)
    int yearEstablished;      // The year the restaurant was established
};

// Function prototypes
Restaurant consoleInput();                    // Let user input the data for the Restaurant struct object

void displayStruct(const Restaurant& res);    // Display the data of the struct

// Main function
int main()
{
    // Create 4 Restaurant structs by hard-coding the data 
    Restaurant domino {    // Domino's Pizza
        "Domino's Pizza",
        "901 Sunvalley Blvd Ste 101, Concord, CA",
        "(925) 826-5040",
        2.5,
        "American",
        "$",
        1960
    };
    displayStruct(domino);    // Display the Restaurant's information

    Restaurant phoSaiGon {    // Pho Sai Gon city 2
        "Pho Sai Gon city 2",
        "1617 Contra Costa Blvd, Pleasant Hill, CA",
        "(925) 375-1353",
        4.0,
        "Vietnamese",
        "$",
        2018
    };
    displayStruct(phoSaiGon);    // Display the Restaurant's information

    Restaurant mcDonalds {    // McDonald's
        "McDonald's",
        "624 Contra Costa Blvd, Pleasant Hill, CA",
        "(925) 677-2121",
        2.5,
        "American",
        "$",
        1940
    };
    displayStruct(mcDonalds);    // Display the Restaurant's information

    Restaurant elAguila {    // El Aguila Mexican Cuisine
        "El Aguila Mexican Cuisine",
        "1300 Contra Costa Blvd, Ste 12, Pleasant Hill, CA",
        "(925) 682-4444",
        4.5,
        "Mexican",
        "$$",
        2013
    };
    displayStruct(elAguila);    // Display the Restaurant's information

    // Create 4 Restaurant structs by letting the user enter the data
    cout << "Enter the information of the first Restaurant: " << endl;    // First Restaurant
    Restaurant res0 = consoleInput();    // Create a new Restaurant struct object
    displayStruct(res0);                 // Display the Restaurant's information

    cout << "Enter the information of the second Restaurant: " << endl;    // Second Restaurant
    Restaurant res1 = consoleInput();    // Create a new Restaurant struct object
    displayStruct(res1);                 // Display the Restaurant's information

    cout << "Enter the information of the third Restaurant: " << endl;    // Third Restaurant
    Restaurant res2 = consoleInput();    // Create a new Restaurant struct object
    displayStruct(res2);                 // Display the Restaurant's information

    cout << "Enter the information of the fourth Restaurant: " << endl;    // Fourth Restaurant
    Restaurant res3 = consoleInput();    // Create a new Restaurant struct object
    displayStruct(res3);                 // Display the Restaurant's information

    return 0;
}

// Function implementations
/*
    consoleInput()
    Allows the user to enter information for a Restaurant struct.
    Arguments: none
    Returns: a Restaurant struct that contains the user's input
*/
Restaurant consoleInput()    // Let user input the data for the Restaurant struct object
{
    // Create a temporary Restaurant struct
    Restaurant res;

    // Get the Restaurant's name
    cout << " - Enter the Restaurant's name: ";
    getline(cin, res.name);

    // Input validation: ask user to enter a name that has at least 1 character
    while (res.name.length() <= 0)
    {
        cout << "Error! Please enter a valid name (at least 1 character): ";
        getline(cin, res.name);
    }

    // Get the Restaurant's address
    cout << " - Enter the Restaurant's address: ";
    getline(cin, res.address);

    // Input validation: ask user to enter an address that has at least 1 character
    while (res.address.length() <= 0)
    {
        cout << "Error! Please enter a valid address (at least 1 character): ";
        getline(cin, res.address);
    }

    // Get the Restaurant's contact number
    cout << " - Enter the Restaurant's contact number: ";
    getline(cin, res.contactNumber);

    // Input validation: ask user to enter a contact number that has at least 3 and no more than 15 characters
    while (res.contactNumber.length() < 3 || res.contactNumber.length() > 15)
    {
        cout << "Error! Please enter a valid contact number (between 3 and 15 characters): ";
        getline(cin, res.contactNumber);
    }

    // Get the Restaurant's rating
    cout << " - Enter the Restaurant's rating (0.0 to 5.0): ";
    cin >> res.rating;
    cin.ignore(1000, 10);

    // Input validation: ask user to enter a number between 0.0 and 5.0
    while (res.rating < 0.0 || res.rating > 5.0)
    {
        cout << "Error! Please enter a valid rating (between 0.0 and 5.0): ";
        cin >> res.rating;
        cin.ignore(1000, 10);
    }

    // Get the Restaurant's cuisine type
    cout << " - Enter the Restaurant's cuisine type (eg. Vietnamese, American, etc): ";
    getline(cin, res.cuisineType);

    // Input validation: ask user to enter at least 1 character for the cuisine type
    while (res.cuisineType.length() <= 0)
    {
        cout << "Error! Please enter a valid cuisine type (at least 1 character): ";
        getline(cin, res.cuisineType);
    }

    // Get the Restaurant's price range
    cout << " - Enter the Restaurant's price range (eg. $, $$ or $$$): ";
    getline(cin, res.priceRange);

    // Input validation: ask user to enter a the price range as either $, $$ or $$$
    while (res.priceRange != "$" && res.priceRange != "$$" && res.priceRange != "$$$")
    {
        cout << "Error! Please enter a valid price range ($, $$ or $$$): ";
        getline(cin, res.priceRange);
    }

    // Get the Restaurant's established year
    cout << " - Enter the Restaurant's established year: ";
    cin >> res.yearEstablished;
    cin.ignore(1000, 10);

    // Input validation: ask user to enter a number between 0.0 and 5.0
    while (res.yearEstablished < 1800 || res.yearEstablished > CURRENT_YEAR)
    {
        cout << "Error! Please enter a valid year (between 1800 and 2025): ";
        cin >> res.yearEstablished;
        cin.ignore(1000, 10);
    }

    // Enter a new line
    cout << endl;

    // Return the Restaurant struct object
    return res;
}

/*
    displayStruct()
    Display all the information of a Restaurant struct.
    Arguments: a Restaurant struct
    Returns: none
*/
void displayStruct(const Restaurant& res)    // Display the data of the struct
{
    // Display the Restaurant struct object's information
    cout << left << setw(FIELD_WIDTH) << "Restaurant's name: " << res.name << endl;
    cout << left << setw(FIELD_WIDTH) << "Restaurant's address: " << res.address << endl;
    cout << left << setw(FIELD_WIDTH) << "Restaurant's contact number: " << res.contactNumber << endl;
    cout << left << setw(FIELD_WIDTH) << "Restaurant's rating: " << res.rating << endl;
    cout << left << setw(FIELD_WIDTH) << "Restaurant's cuisine type: " << res.cuisineType << endl;
    cout << left << setw(FIELD_WIDTH) << "Restaurant's price range: " << res.priceRange << endl;
    cout << left << setw(FIELD_WIDTH) << "Restaurant's established year: " << res.yearEstablished << endl;
    
    // Enter a new line after displaying the data
    cout << endl;
}