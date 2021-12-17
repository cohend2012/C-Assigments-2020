// Daniel Cohen
//Lab13
//Create the Hit and Slopes Program to track and report snow report over one week to determine the height of snow fall and avg snow fall



#include<iostream> //preprocesser directive for io
#include<string> //string library
#include<iomanip> // library for data manipulation,
using namespace std; // using std naming



int main()//main program start
{
    const int SIZE =7;//day in  week, size of the array

    int date[SIZE];//create an array of size 7 for the data
    double snowFall[SIZE];//create an array of size 7 for the snowFall
    int dataCounter=1; //create a counter for the data
    int dateMaxIndex=0;
    int dateMinIndex=0;
    string month; //creating a string for the entry of each month
    int maxIndex =0; //creating an var of type int to find the max index
    double snowFallSum=0;//creating a variable for the snowfall



    cout<<"What month is it? "<<endl; //asking the user what month it is
    cin>>month;//taking the input for the month
    cout<<"Please enter the Data and Snow Fall"<<endl;//asking the user to enter data



    for(int i=0;i<SIZE;i++)//creating a for loop to enter data and look for the max of the snowfll and index
    {
        cout<<"Enter the date : ";//enter the data
        cin>>date[i];//enter each data in the array
        cout<<"Enter the Snow Fall that corresponds : ";//what is the snow fall
        cin>>snowFall[i];//enter the snowfall into the array

        if(snowFall[maxIndex]<snowFall[i])//performing a linear search
        {                                 // if a new max is found reset the max index to the curent index
            maxIndex=i; //if a new max index is found store it in max index

        }

        if(date[dateMaxIndex]<date[i]) //finding the max data entered
        {

            dateMaxIndex=i;//find the max index

        }

        if(date[dateMinIndex]>date[i])//finding the min date entered
        {

            dateMinIndex=i;//find the min index

        }


        snowFallSum+=snowFall[i];//add all the snowall together to create a total


    }
    cout<<endl;

    cout<<"Snow report "<<month<<" "<<date[dateMinIndex]<<" - "<<date[dateMaxIndex]<<endl; //output the report to the suer
    cout<<endl;
    cout<<"Date\tSnow Fall"<<endl;//show snowfall
    cout<<setprecision(2)<<fixed;//show results with two decimial places

    for(int i=0;i<SIZE;i++)//creating for loop to output all results of the snow fall and date
    {
        cout<<date[i]<<"\t"<<snowFall[i]<<endl;//outout results


    }
    cout<<endl;
    cout<<endl;
    //show results with two decimial places
    cout<<setprecision(3)<<fixed;
    cout<<"Height snow fall is "<<snowFall[maxIndex]<<" on "<<date[maxIndex]<<" th "<<"and the average snow fall is "<<(snowFallSum/SIZE)<<endl;
    //output data for the max snow fall and what data it was on along with the avg of the snowfall

    return 0;//end of program

}




