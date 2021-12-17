//Homework3Questions1.cpp
//Dan Cohen
//Program calculates the area of a circle, rectangle or a triangle, or quites
//changes were made to the code so the system will run in do while loop untill as to do otherwise


#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;

    int    choice;         // User's shape choice
    double radius,         // Circle radius
           length,         // Rectangle length
           width,          // Rectangle width
           base,           // Triangle base
           height,         // Triangle height
           area;           // Area of the selected shape

           char runAgain;

	// Display selections and request user input
	do{
        cout << "Geometry Calculator\n\n";
        cout << "1. Calculate the area of a Circle\n";
        cout << "2. Calculate the area of a Rectangle\n";
        cout << "3. Calculate the area of a Triangle\n";
        cout << "4. Quit\n\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

	// Calculate and display the area of the selected shape





        switch (choice)
        {
            case 1:  // Area of a circle
                     cout << "\nEnter the circle's radius: ";
                     cin  >> radius;//get user radius

                     if (radius < 0)// if it is not a posative nuber
                         cout << "\nThe radius can not be less than zero.\n";
                     else
                     {	 area = PI * radius * radius;//if it is posative
                         cout << "\nThe area is " << area << endl;

                     }
                     break;//moved out here as per the instructers wishes

            case 2:  // Area of a rectangle
                     cout << "\nEnter the rectangle's length: ";
                     cin  >> length;//get length
                     cout << "Enter the rectangle's width: ";
                     cin  >> width;//get width

                     if (length < 0 || width < 0)//need posative values
                         cout << "\nOnly enter positive values for length and width.\n";
                     else
                     {	 area = length * width;//calculate
                         cout << "\nThe area is " << area << endl;
                     }
                     break;

            case 3:  // Area of a triangle
                     cout << "Enter the length of the base: ";
                     cin  >> base;//base of the trianlge
                     cout << "Enter the triangle's height: ";
                     cin  >> height;//hight

                     if (base < 0 || height < 0)
                         cout << "\nOnly enter positive values for base and height.\n";
                     else
                     {	 area = base * height * 0.5;//calc
                         cout << "\nThe area is " << area << endl;
                     }
                     break;

            case 4:	 cout << "\nBye!\n";
                     break;//leave program

            default:  cout << "\nYou may only enter 1, 2, 3, or 4.\n";
        }

        cout<<"Would you like to run this program again?, (Y,N) : ";//would you like to run this program again
        cin>>runAgain;//if they would like to run them again
	}   while(runAgain=='Y');//run again if Y





	return 0;//end program
}
