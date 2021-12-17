// Daniel Cohen
//Lab16a
//This lab This lab will compute the area of a circle from the radius and circumference fuctions



#include<iostream> //preprocesser directive for io
#include<string> //string libraty
#include<cstdlib> //needed for the system pause, cstdlib library
using namespace std; // using std naming


double getRadius();//prototype for getRadius function that will get the radius from the user


double findArea(double radius);//prototype findArea function that will calculate the circumference of a circle

double findCircumference(double radius);//prototype for the findCircumference function


int main()//main program start
{

     double radius;    //the radius of the circle
     double area;             //the area of the circle
     double circumference;    //the circumference of the circle
  //get the value of the radius from the user
  radius = getRadius();
  //determine the area and circumference
  area = findArea(radius);
  circumference = findCircumference(radius);
  //output the results
  cout << "A circle of radius " << radius << " has an area of: " << area <<endl;
  cout << "and a circumference of: "<< circumference << endl;
  system("PAUSE");

    return 0;//end program
 }


 // *****************************************************************************
 //     task: The getRadius()
 //     description: function gets the radius of the circle from the user
 //     sample case: getRadius()
 //     Input: Empty list/no input
 //     Output: void
 //
 // *****************************************************************************



double getRadius()
{
    double radius;//create radius variable
    cout<<"Enter the Radius of the circle: "; //ask the user for the radius
    cin>>radius;//get radius

    return radius;//return the final score


}


 // *****************************************************************************
 //     task: double findArea(double radius)
 //     description: calculates the area of a circle
 //     sample case: findArea(double radius)
 //     Input: Empty double radius
 //     Output: double area
 //
 // *****************************************************************************

double findArea(double radius)
{

    double area;//creating area variable
    const double PI=3.14159;//creating a const PI

    area=PI*radius*radius;//calculating the area based PI and radius


    return area;//return


}



// *****************************************************************************
 //     task: double findCircumference(double radius)
 //     description: calculates the circumference of a circle
 //     sample case: double findCircumference(double radius)
 //     Input: double radius
 //     Output: double circumference
 //
 // *****************************************************************************


double findCircumference(double radius)
{
    double circumference;//create circumference variable
    const double PI=3.14159;//creating const PI
    circumference=2*PI*radius;//calculating circumference

    return circumference; //return


}






