// Daniel Cohen
//lab16b
//This lab calculates gross Pay and net pay

// This program takes two numbers (payRate & hours)
// and multiplies them to get grosspay.
// It then calculates net pay by subtracting 15%
#include<iostream> //preprocesser directive for io
#include<string> //string libraty
#include <iomanip>//manipulating io libray
using namespace std; // using std naming
//Function prototypes
void printDescription();
void computePaycheck(float, int, float&, float&);


int main()//main program start
{
    float payRate;//creating pay rate variable
    float grossPay;//creating gross pay variable
    float netPay;//creating net pay variable
    int hours;//creating hours variable
    cout << setprecision(2) << fixed;//display with two deci places and if it has a .00 keep it
    cout << "Welcome to the Pay Roll Program" << endl;//welcome to program
    //Call to Description function
    printDescription();// call function to display program description
    cout << "Please input the pay per hour" << endl;// input pay per hour
    cin >> payRate;//get user input for pay
    cout << "Please input the number of hours worked" << endl;//how many hours did they work
    cin >> hours;//input hours worked
    computePaycheck(payRate, hours,grossPay, netPay);//call compute paycheck function
    cout << setprecision(0) << fixed;//display with two deci places and if it has a .00 keep it
    cout<<"The gross pay is $"<<grossPay<<endl;//display result of gross pay
    cout<<"The net pay is $"<<netPay<<endl;//display net pay


    return 0;//end program
}


// *********************************************************************
//   Function: void printDescription()
//
//   Description: This function displays the description of the program this program and what it will do.
//   Input: No input
//   output: No out, but will display to monitor
// ********************************************************************

void printDescription()
{
    cout << "************************************************" << endl;//display description of program
    cout << "This program takes two numbers (payRate & hours)" << endl;//display description of program
    cout << "and multiplies them to get gross pay " << endl;//display description of program
    cout << "it then calculates net pay by subtracting 15%" << endl;//display description of program
    cout << "************************************************" << endl;//display description of program


}



 //***************************************************************************************
 //     Function: void computePaycheck(float rate, int time, float& gross, float& net)
 //     Description: This function take in the rate, the time and grss pay and the net pay
 //                     and calculates the gross pay and net pay via pass by reference
 //
 //     sample case: computePaycheck(float rate, int time, float& gross, float& net)
 //     Input: (float rate, int time, float& gross, float& net)
 //     Output: void
 //
 //**************************************************************************************

void computePaycheck(float rate, int time, float& gross, float& net)
{
    gross=rate*time;// calc gross pay by rate* time

    net=gross-(gross*0.15);//calc net pay, 0.15 is 15%

}



