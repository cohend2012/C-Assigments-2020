// Daniel Cohen
//Assignment4.cpp
//

//1. 56789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104

//2. !lwt d,duyrv a
//Explination, starting from the last index and subtracting an index -2 each time, for each on of these index's a char is displayed.


/*
//3/
#include<iostream> //preprocesser directive for io
#include<string> //string library

using namespace std; // using std naming



int main()//main program start
{
    int sentinelValue=1;//start with a sentinal value that would not leave loop
    int userInput;
    int count=0;
    int coffee,tea,coke,orangeJuice;

    coffee=tea=coke=orangeJuice=0;




    do
    {

       cout<<"Please input the favorite beverage of person #1: Choose 1, 2, 3, or 4 from the"<<endl;//ask user to input bevrage
       cout<<"above menu or -1 to exit the program"<<endl;//  do they want to quit
       cin>>userInput;//get user input


        switch(userInput)//switch case on the user input
        {

            case 1:
                    //coffee
                    coffee++;//add to coffee
                    count++;//add to total count
                    break;//leave
            case 2:
                    //tea
                    tea++;//add to tea
                    count++;//add to total count
                    break;//leave

            case 3:
                    //coke
                    coke++;//add to coke
                    count++;//ad to total count
                    break;//leave


            case 4:
                    //orange juice
                    orangeJuice++;//add to OJ
                    count++;//add to total count
                    break;//leave

            case -1:

                    sentinelValue=-1;// if they want to leave
                    break;//leave

            default:

                    sentinelValue=-1;//if they enter something in the other cases
                    break;//leave



        }




    }while(sentinelValue!=-1);//while the user has not entered -1

    cout<<"The total number of people surveyed is "<<count<<"."<<"The result are as follows:"<<endl;//displaying how many people were surveyed
    cout<<"Beverage Number of Votes"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"Coffee "<<coffee<<endl; //how many coffee
    cout<<"Tea "<<tea<<endl; //display how many tea
    cout<<"Coke "<<coke<<endl; //display how many cokes
    cout<<"Orange Juice "<<orangeJuice<<endl; //display how many orange juice






    return 0;//end of program
}


    int count=0;
    int numItems=4;

    while(count<100)
    {

        numItems++;
        cout<<numItems;
        count++;

    }

    */

    /*
    string myString="What ever you do, do it well!";

    for(int i=myString.length()-1; i>0; i-=2)
    {
        cout<<myString[i];

    }
    */


/*

#include<iostream> //preprocesser directive for io
#include<string> //string libraty

using namespace std; // using std naming



int main()//main program start
{

    int numberOfCities;// how many cities would they like to create
    int cityNumber=0;//start with city number of
    int minPopulation=0; //starting with an index value to look for the min population
    bool negativePop=false;//assume the user did not enter bad info, but we will check
    const int  STAR_FACTOR=1000;//each start is worth 1000

    int * population;// creating pointer for the population
    int * starNumber;// creating pointer for the start number
    cout<<"How many cities population would you like to enter :";//having the user how many Cities they want to enter
    cin>>numberOfCities;//how many Cities do they need.

    population= new int[numberOfCities];//memory is allocated according to the user input bases on how many cities the user wants to enter
    starNumber= new int[numberOfCities];//memory is allocated according to the user input bases on how many cities the user wants to enter






    do //creating a do while loop need to check and repeat if they enter a negative population
    {
        for(int i=0;i<numberOfCities;i++)//creating a for loop to have the user enter in each city's population using Number of Cities.
        {
            cityNumber++;//add to city number.
            cout<<"Enter the population of city "<<cityNumber<<" : ";//what is the population?
            cin>>population[i];//enter the population for the respective city.



        }

        for(int j =0;j<numberOfCities;j++)// creating for loop to look for the smallest population entered using Number of Cities.
        {
            if(population[minPopulation]>population[j])//finding the smallest number relative to each index.
            {
                minPopulation=j;//reset the lowest number if a new one is found.

            }
        }

        if(population[minPopulation]<0)//if the lowest value is negative.
        {

            cout<<"\n\nPopulation can't be negative. Please re-enter\n\n";//user needs to re-enter all data if they put in a negative pop.
            negativePop=true;//while loop needs to run again.
            cityNumber=0;//reset the city number to 0.

        }
        else
        {
            negativePop=false;//is the population negative.
        }






    }while(negativePop);//run again if they enter the wrong and negative number.


    if(negativePop==false)//if they enter posative numbers in the data.

    {

        cout<<endl;//creating space.
        cout<<endl;//creating space.
        cout<<"\t\t\t   POPULATION"<<endl;//outlineing that each star *is worth 1000 people.
        cout<<"\t\t\t(each*=1000 people)"<<endl;



        cityNumber=0; //reseting city number.

        for(int i=0;i<numberOfCities;i++)//creating a for loop from the 0 index to the total amount of city's from Number of Cities.
        {

            cityNumber++;//add one to city number
            starNumber[i]=population[i]/STAR_FACTOR;//counting how many starts much be printed.
            cout<<"City "<<cityNumber<<" : ";//printing the city number.
            for(int j=0;j<starNumber[i];j++) //creating a loop for each start needed.
            {
                cout<<"*";//print for each start needed.


            }
            cout<<endl;//creating space in the program.




        }


    }

    delete[] starNumber;//deallocating memory for starNumber.
    delete[] population;//deallocating memory for population.
    return 0;

}
*/






#include<iostream> //preprocesser directive for io
#include<string> //string libraty

using namespace std; // using std naming



int main()//main program start
{

    const int SIZE=4;//4 cities
    const int STAR_FACTOR=1000;//each start is worth 1000
    int population[SIZE];//creating a int var with a size of 4 for the population
    int starNumber[SIZE];//creating a start number var with the same size as SIZE (4)
    int cityNumber=0;//start with city number of
    int minPopulation=0; //starting with an index value to look for the min population
    bool negativePop=false;//assume the user did not enter bad info, but we will check





    cout<<"Please enter number of cities: "<<SIZE<<endl;
    do //creating a do while loop need to check and repeat if they enter a negative population
    {
        for(int i=0;i<SIZE;i++)//creating a for loop to have the user enter in each city's population
        {
            cityNumber++;//add to city number
            cout<<"Enter the population of city "<<cityNumber<<" : ";//what is the population?
            cin>>population[i];//enter the population for the respective city



        }

        for(int j =0;j<SIZE;j++)// creating for loop to look for the smallest population entered
        {
            if(population[minPopulation]>population[j])//finding the smallest number relative to each index
            {
                minPopulation=j;//reset the lowest number if a new one is found

            }
        }

        if(population[minPopulation]<0)//if the lowest value is negative
        {

            cout<<"\n\nPopulation can't be negative. Please re-enter\n\n";//user needs to re-enter all data if they put in a negative pop
            negativePop=true;//while loop needs to run again
            cityNumber=0;//reset the city number to 0

        }
        else
        {
            negativePop=false;//is the population negative
        }






    }while(negativePop);//run again if they enter the wrong dta


    if(negativePop==false)//if they enter posative numbers in the data

    {

        cout<<endl;//creating space
        cout<<endl;//creating space
        cout<<"\t\t\t   POPULATION"<<endl;//outlineing that each star *is worth 1000 people
        cout<<"\t\t\t(each*=1000 people)"<<endl;



        cityNumber=0; //reseting city number

        for(int i=0;i<SIZE;i++)//creating a for loop from the 0 index to the total amount of city's from SIZE
        {

            cityNumber++;//add one to city number
            starNumber[i]=population[i]/STAR_FACTOR;//counting how many starts much be printed
            cout<<"City "<<cityNumber<<" : ";//printing the city number
            for(int j=0;j<starNumber[i];j++) //creating a loop for each start needed
            {
                cout<<"*";//print for each start needed


            }
            cout<<endl;//creating space in the program




        }


    }



    return 0;

}




