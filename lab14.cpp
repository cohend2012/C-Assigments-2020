// Daniel Cohen
//Lab14
//This lab will calculate the students final grade and out puts the result
// it will use there HW and Test scores along with two functions



#include<iostream> //preprocesser directive for io
#include<string> //string libraty
#include<cstdlib> //needed for the system pause, cstdlib library
using namespace std; // using std naming


double calcFinalScore(double test1,double test2,double hw);//prototype calcFinalScore function

void printFinalScore(double finalScore);//prototype printFinalScore function



int main()//main program start
{

    // local variables
    double test1, test2; // the two tests scores
    double hw;           // the homework score
    double finalScore;   // the student's final score
    cout << "Enter the score for test #1: "; //enter the test score 1
    cin >> test1; //take in user info
    cout << "Enter the score for test #2: ";//enter test score 2
    cin >> test2; //take in user info
    cout << "Enter the score for the homework: ";//enter hw score
    cin >> hw; //take in hw score
    finalScore = calcFinalScore(test1,test2, hw);//function for calculating final score
    printFinalScore(finalScore); //function to print final score

    system("PAUSE");//pause system untill user enter any key
    return 0;//end program
 }



 //***************************************************************************************
 // Function: calcFinalScore calculates the final score given test1,test 2 and their HW
 //           and outputs the final score
 //
 //     sample case: double calcFinalScore(double test1,double test2,double hw)
 //
 //**************************************************************************************



double calcFinalScore(double test1,double test2,double hw)//function that will take in three doubles, two test and one hw and return final score
{

    double const TEST_PRCENT_IN_DECI=0.4;//test percent to deci for the test
    double const HW_PRCENT_IN_DECI=0.2; // hw percent to deci for the hw
    double finalScore;//final score var

    finalScore=(TEST_PRCENT_IN_DECI*test1+TEST_PRCENT_IN_DECI*test2+HW_PRCENT_IN_DECI*hw);//calculation for the final score

    return finalScore;//return the final score


}





 //***************************************************************************************
 // Function: printFinalScore displays the result of the final score and also what grade
 //           Input: final Score
 //           Output: final score and grade letter
 //     sample case: void printFinalScore(double finalScore)
 //
 //**************************************************************************************


void printFinalScore(double finalScore)//function that print the final score, takes in a final score and just prints the grade
{


    cout<<"The student's final score is: "<<finalScore<<endl;

    cout<<"Their final letter grade is: ";

    if(finalScore>=90.0)//if final score is grader or equal to 90.0
    {
        cout<<"A"<<endl;//display  A

    }
    else if(finalScore>=80)//if final score is grader or equal to 80.0
    {

        cout<<"B"<<endl;//display B

    }
    else if(finalScore>=70)//if final score is grader or equal to 70.0
    {

        cout<<"C"<<endl; //display C

    }
    else if(finalScore>=60)//if final score is grader or equal to 60.0
    {

        cout<<"D"<<endl; //display D

    }
    else//if they get less then 60 percent
    {
        cout<<"F"<<endl;//display F

    }


}





