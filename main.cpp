#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

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
Restaurant consoleInput();             // Let user input the data for the Restaurant struct object

void displayStruct(Restaurant res);    // Display the data of the struct

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
    cout << "Enter the first Restaurant: " << endl;    // First Restaurant
    Restaurant res0 = consoleInput();    // Create a new Restaurant struct object
    displayStruct(res0);                 // Display the Restaurant's information

    Restaurant res1 = consoleInput();    // Create a new Restaurant struct object
    displayStruct(res1);                 // Display the Restaurant's information

    Restaurant res2 = consoleInput();    // Create a new Restaurant struct object
    displayStruct(res2);                 // Display the Restaurant's information
    
    Restaurant res3 = consoleInput();    // Create a new Restaurant struct object
    displayStruct(res3);                 // Display the Restaurant's information

    return 0;
}

// Function implementation
Restaurant consoleInput()
{
    // Create a temporary Restaurant struct
    Restaurant res;

    // Get the Restaurant's name
    cout << " - Enter the Restaurant's name: ";
    getline(cin, res.name);

    // Get the Restaurant's address
    cout << " - Enter the Restaurant's address: ";
    getline(cin, res.address);

    // Get the Restaurant's contact number
    cout << " - Enter the Restaurant's contact number: ";
    getline(cin, res.contactNumber);

    // Get the Restaurant's rating
    cout << " - Enter the Restaurant's rating (0.0 to 5.0): ";
    cin >> res.rating;
    cin.ignore(1000, 10);

    // Get the Restaurant's cuisine type
    cout << " - Enter the Restaurant's cuisine type (eg. Vietnamese, American, etc): ";
    getline(cin, res.cuisineType);

    // Get the Restaurant's price range
    cout << " - Enter the Restaurant's price range (eg. $, $$ or $$$): ";
    getline(cin, res.priceRange);

    // Get the Restaurant's established year
    cout << " - Enter the Restaurant's established year: ";
    cin >> res.yearEstablished;
    cin.ignore(1000, 10);

    // Enter a new line
    cout << endl;

    // Return the Restaurant struct object
    return res;
}

void displayStruct(Restaurant res)
{
    // Display the Restaurant struct object's information
    cout << left << setw(32) << "Restaurant's name: " << res.name << endl;
    cout << left << setw(32) << "Restaurant's address: " << res.address << endl;
    cout << left << setw(32) << "Restaurant's contact number: " << res.contactNumber << endl;
    cout << left << setw(32) << "Restaurant's rating: " << res.rating << endl;
    cout << left << setw(32) << "Restaurant's cuisine type: " << res.cuisineType << endl;
    cout << left << setw(32) << "Restaurant's price range: " << res.priceRange << endl;
    cout << left << setw(32) << "Restaurant's established year: " << res.yearEstablished << endl;
    
    // Enter a new line after displaying the data
    cout << endl;
}