#include <iostream>
using namespace std;

double CalcPayment(int ,double);

int main()
{
    //Declaring statements
    double PayRate;
    int HoursWorked;
    double Payment;
    

    //Title
    cout << "Payroll System\n";
    cout << "==============\n\n";

    //User input
    cout << "Enter The Pay Rate ===>";
    cin >> PayRate;

    cout << "Enter the Hours you Worked ===>";
    cin >> HoursWorked;

    /*conditional Statement 
    if (HoursWorked>40)
    {
        Payment = (PayRate * 40) + ((HoursWorked - 40) * (1.5 * PayRate)) ; 
    }
    else
    {
        Payment = PayRate * HoursWorked;
    }
    */

    //Calculation and print
    Payment = CalcPayment(Payment, HoursWorked);
    cout << "Your Payment is ===>" << Payment;

}

double CalcPayment(double p, int h)
    {
        if (h>40)
        {
            return (p * 40) + ((h - 40) * (1.5 * p)) ; 
        }
        else
        {
            return p * h;
        }
    }

