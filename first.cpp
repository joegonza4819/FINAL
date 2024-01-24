
#include <iostream>
using namespace std;

int main()
{
    //Declaring statements
    double PayRate;
    double HoursWorked;
    double Payment;

    //Title
    cout << "Payroll System\n";
    cout << "==============\n\n";

    //User input
    cout << "Enter The Pay Rate ===>";
    cin >> PayRate;

    cout << "Enter the Hours you Worked ===>";
    cin >> HoursWorked;
    
    //Calculation and print
    Payment = PayRate * HoursWorked;
    cout << "Your Payment is ===>" << Payment;

}


