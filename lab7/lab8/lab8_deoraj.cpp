/*
Matthew Deoraj 
June 3, 2026
Lab 8: Temperature Converter
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "\n ---- Lab 8: Temperature Converter ---- " << endl;

    // declare variables
    int choice = 0;
    float celsius = 0.0;
    float fahrenheit = 0.0;
    float kelvin = 0.0;

    // display menu
    cout << "Choose conversion type:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Fahrenheit to Kelvin" << endl;

    // ask user for choice
    cout << "\nEnter choice: ";
    cin >> choice;

    cout << fixed << setprecision(1);

    // conditional statement for conversion choice
    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        fahrenheit = (1.8 * celsius) + 32;

        cout << celsius << "°C is " << fahrenheit << "°F" << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        celsius = (5.0 / 9.0) * (fahrenheit - 32);

        cout << fahrenheit << "°F is " << celsius << "°C" << endl;
    }
    else if (choice == 3) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        kelvin = celsius + 273.15;

        cout << celsius << "°C is " << kelvin << "K" << endl;
    }
    else if (choice == 4) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        kelvin = ((fahrenheit - 32) * (5.0 / 9.0)) + 273.15;

        cout << fahrenheit << "°F is " << kelvin << "K" << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}

/*
// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.

The code uses concepts that were covered in class, such as variables, cin, cout,
if-else statements, and basic math formulas. The only part that may need extra
attention is fixed and setprecision(1), which are used to display the answer with
one decimal place.

// 2. Are there any issues or improvements you noticed? Explain.

One improvement was adding a menu so the user can choose the type of temperature
conversion. Another improvement was formatting the answer to one decimal place
so the output looks cleaner and matches the assignment instructions.

// 3. What methods did you use to test if the AI code was working as it should? Explain.

I tested the program by entering known values. For example, 25 degrees Celsius
should convert to 77.0 degrees Fahrenheit, and 98.6 degrees Fahrenheit should
convert to 37.0 degrees Celsius. I also tested different menu choices to make
sure each conversion worked correctly.
*/