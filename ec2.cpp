// Daniel Cohen
//ec2.cpp
//This program performs four conversions, farrenheit to celsius, Miles to Kilometers and Liters to Gallons
//Or the user will elect to exit the program


#include<iostream> //preprocesser directive for io
using namespace std; // using std naming

void displayMenu();//prototype of displayMenu function

double fahrenheitToCilsuis(double fTemp);//prototype fahrenheitToCilsuis function

double milesToKilometers(double miles);//prototype milesToKilometers function

double litersToGallons(double liters);//prototype litersToGallons function


int main()//main program start
{
    int userSelection;//variable for the user selection based on the menu function
    double returnValue;//general variable for the return value recived for each function
    double userInput;//variable for entering in there info regarding, Fahrenheit,Miles, or Liters
    displayMenu();//function to display menu
    cin>>userSelection;//get user choice on the menu (1-4)

    switch(userSelection)//switch statment for selecting the right function to be ran
    {

        case 1: cout<<"What is your temperature in Fahrenheit? "; //Get users temp in F (if they enter 1)
                cin>>userInput;//take in user temp
                returnValue=fahrenheitToCilsuis(userInput);//get the return var from the function
                cout<<"Your temp in Celsius is "<<returnValue<<endl;//display results
                break;//leave switch-case

        case 2: cout<<"What is your distance in Miles? "; //ask user for input of Miles (if they enter 2)
                cin>>userInput;//take in user input
                returnValue=milesToKilometers(userInput);//gather result after function us called
                cout<<"Your distance in Kilometers is "<<returnValue<<endl;//display result
                break;//leave switch-case



        case 3: cout<<"How many Liters do you have? ";//ask user how many Liters they have (if they enter 3)
                cin>>userInput;//get there input
                returnValue=litersToGallons(userInput);//call function and save results to returnValue
                cout<<"You have "<<returnValue<<" Gallons"<<endl;//display results
                break;//leave switch-case


        case 4: cout<<"Leaving Program..."<<endl; //if they enter 4
                break;//leave switch-case

        default: //if they enter anything other then 1-4
                break;//leave switch-case



    }



    return 0;//end program
 }


//***************************************************************************************
 // Function: displayMenu() displays the menu of the program to explain what the user
 //           should enter
 //
 //     sample case: displayMenu()
 //     Input:Empty list, NO input
 //     Output: no put put not will display to monitor
 //
 //**************************************************************************************


void displayMenu()//display menu
{

    cout<<"\t\tWelcome to the Conversion Program"<<endl;//name of program
    cout<<"\t\t=================================="<<endl;
    cout<<"1. Fahrenheit to Celsius"<<endl; //function 1
    cout<<"2. Miles to kilometers"<<endl;   //function 2
    cout<<"3. Liters to Gallons"<<endl;     //function 3
    cout<<"4. Exit from the Program"<<endl; //function 4
    cout<<"Please enter (1-4) for the program to continue."<<endl;//user choice

}
//***************************************************************************************
// Function: fahrenheitToCilsuis calcs the temp in Celsius given the temp in Fahrenheit
//
//
//     sample case: double fahrenheitToCilsuis(double fTemp)
//     Input: double fTemp
//     Output: double celsius
//**************************************************************************************


double fahrenheitToCilsuis(double fTemp) //function for converting C to F
{
    double const SLOPE_FACTOR= (5.0/9.0); //slope factor
    double const INTERCEPT_FACTOR=32.0;   //intercept factor
    double celsius; //variable for celsius

    celsius= (fTemp-INTERCEPT_FACTOR)*SLOPE_FACTOR;//calc celsius

    return celsius;//return celsius to main program


}


//***************************************************************************************
// Function: milesToKilometers calcs kilometers to miles
//
//
//     sample case: double milesToKilometers(double miles)
//     Input: double miles
//     Output: double kilometer
//**************************************************************************************



double milesToKilometers(double miles)//function for calc of miles to Kilos taking and input of miles
{
    const double CONVERSION_FACTOR_KILO=1.60934;//factor to go from miles to kilos
    double kilometer;//var to save our result in kilometers

    kilometer=miles*CONVERSION_FACTOR_KILO;//convert miles to kilos

    return kilometer;//return kilometer to main program

}


//***************************************************************************************
// Function: litersToGallons calcs Gallons to miles liters
//
//
//     sample case: double litersToGallons(double liters)
//     Input: double liters
//     Output: double gallons
//**************************************************************************************

double litersToGallons(double liters)  //function for converting liters to gallons
{
    const double CONVERSION_FACTOR_GALLON=0.264172; //factor to go rom liters to gallons
    double gallons;//var to save our result of conversion

    gallons=liters*CONVERSION_FACTOR_GALLON;//calculate the conversion

    return gallons;// return gallons to main program



}







