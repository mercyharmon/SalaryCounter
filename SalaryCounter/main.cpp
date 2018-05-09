//==========================================================
//
// Title: Salary Counter
// Author: Mercyllia Harmon
// Description:
// program that calculates a special pay increase for an employee in a company. User is prompted to enter first name, last name, the current salary and the incremental percentile.Write a program that computes the increase in salary based on the incremental percentileation including its inputs.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type

using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()

{
    
    // Declare variables
    string month;
    string firstName;
    string lastName;
    int currentSalary;
    int hours;
    double grossPay;
    double federalTax;
    double ficaTax;
    double stateTax;
    double netPay;
    float newSalary;
    
    // Show application header
    cout << "Welcome to Salary Counter " << endl;
    cout << "--------------------------" << endl << endl;
    
    // Initialize varibles
    cout << "First Name";
    cin >> firstName;
    cout << "Last Name";
    cin >> lastName;
    cout << "Please input the payvheck month: ";
    cin >> month;
    cout << "Please input a number of hours worked (Integer):";
    cin >> hours;
    cout << "Please input an currentSalary: ";
    cin >> currentSalary;
    cout << "Please input new new Salary";
    cin >> newSalary;
    
    // Caculate pays and taxes on a paycheck
    grossPay = currentSalary * hours;
    federalTax = grossPay * 0.15;
    ficaTax = grossPay * 0.0765;
    stateTax = grossPay * 0.0435;
    netPay = grossPay - federalTax - ficaTax - stateTax;
    newSalary = currentSalary - newSalary / currentSalary;
    
    // Show inputs and outputs
    cout << "_______________________________" << endl << endl;
    cout << "Paycheck month " << month << endl;
    cout << "HourlyRate: " << fixed << setprecision(2) << currentSalary << "$/hour" << endl;
    cout << "Number of Hours Worked: " << hours << "hours" << endl;
    cout << "GrossPay: " << setprecision(2) << grossPay << "$" << endl;
    cout << "Federal Tax: " << setprecision(2) << federalTax << "$" << endl;
    cout << "State Tax: " << setprecision(2) << stateTax << "$" << endl;
    cout << "NetPay: " << setprecision(2) << netPay << "$" << endl;
    cout << "newSalary: " << setprecision(2) << newSalary << "$" << endl;
    
    // Show application close
    cout << "\nEnd of Salary Counter " << endl << endl;
    
    // Pause before application window closes
    cout << "Press any key to exit ..." << endl;
    return 0;
}
