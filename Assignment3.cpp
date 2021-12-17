// Daniel Cohen
//Assigment 3.cpp
//Phone Bill Generation Software
//Along with the 1a.1b,1c
// and I a,b IIa
//
// Questions 1. section a) Run 1, 1 Enter the circle's radius
//                                The area is 50.2654
//                         Run 2, 1 Enter the circle's radius
//                                The area is 0
//                         Run 3, 4 -1 Bye!




/*

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

*/

/*
//part2

#include<iostream> //preprocesser directive for io
#include<string> //string libraty
#include<iomanip> //io manipulation libraty
using namespace std; // using std naming



int main()//main program start
{

    char moreBills;// do they want more bills
    char customerType; // what type of customer
    string phoneNumber;//what is the phone number
    int phoneNumberMinutes=0; //start with 0

    //two type of customers
    //Regular (R) and Busniess B

    //For B
    //base pay=$99.99 a month,
    //the first 600 mins are free,
    //then in stage1 it is $0.45 per min
    //stage 3 is $0.99 per min

    //For r
    // base pay is 29.99
    //first 200 mins free
    //stage 1 min are 250 with a cost of $0.55
    //Stage 2 is $0.88

    const double BASE_PAY_BUSINESS_CUSTOMER=99.99,BASE_PAY_REGULAR_CUSTOMER=29.99; //base pay for biz and reg customer
    double userBasePay=0;// final base baystart with 0
    const double FIRST_FREE_MIN_BUSINESS_CUSTOMER=600,FIRST_FREE_MIN_REGULAR_CUSTOMER=200;//in biz and reg customer mins
    const double STAGE_1_BUSINESS_CUSTOMER_RATE=0.45,STAGE_1_REGULAR_CUSTOMER_RATE=0.55 ;// in bix and reg customer stage one rates
    const double STAGE_1_BUSINESS_CUSTOMER_TIME=100,STAGE_1_REGULAR_CUSTOMER_TIME=250;// in bix and reg customer stage one minimum minutes
    const double STAGE_2_BUSINESS_CUSTOMER_RATE=0.99,STAGE_2_REGULAR_CUSTOMER_RATE=0.88 ;// for biz and reg customer stage 2 rates
    //int count=0,countMinWrong=0;

    int key;//key for switch-case statment

    cout<<setprecision(2)<<fixed<<showpoint;


    do
    {//start of do while loop//start all critical cost vars to 0 at the start of the loop
        double BusinesCustomerCost=0,RegularCustomerCost=0;//need to start at 0 evay time
        double BusinesCustomerCostStage1=0,RegularCustomerCostStage1=0; //start at 0
        double BusinesCustomerCostStage2=0,RegularCustomerCostStage2=0; //start at 0
        double totalCostToUser=0; //start at 0



        cout<<"Please Enter the Customer type (R for Regular, B for Business): ";//is the customer regular or biz
        cin>>customerType;//what customer type


        if(customerType=='R'||customerType=='r') //if they are R or r
        {

            userBasePay= BASE_PAY_REGULAR_CUSTOMER;//if they are a regular customer
            key=1;//key is now 1

            cout<<"Please Enter the Customer Phone Number: ";//enter your phone number
            cin>>phoneNumber;//phone number
            cout<<"Enter the phone usage in minutes: ";// how many mins did you use
            cin>>phoneNumberMinutes;


        }
        else if(customerType=='B'||customerType=='b' )//if they are an B or B customer
        {
            userBasePay= BASE_PAY_BUSINESS_CUSTOMER;//assign the user base pay
            key=2;//makes them key 2 for the case swtich

            cout<<"Please Enter the Customer Phone Number: ";//enter phone number
            cin>>phoneNumber;
            cout<<"Enter the phone usage in minutes: ";//enter mins
            cin>>phoneNumberMinutes;


        }

        else
        {
            cout<<"invalid customer type. Please enter R, r for regular and B, b for business customers\n";//they did not put in  R,r,B,b
            cout<<"Please re-run the program correctly\n";
            key=3;//section 3 for case switch

            phoneNumberMinutes=0;//set num of mins to 0
            userBasePay=0;// base pay is 0 to because we dont know who they are
            //count++;//count up

            //if(count>=4)//if they enter in 3 time it will shut them off on the fourth
           // {
               // break;//get out of do statment

           // }

        }



        if(phoneNumberMinutes<0)// if they have negative mins
        {
            cout<<"Please enter your minutes greater then or equal to zero\n";// Warnning msg
            //countMinWrong++;//count up if they did it wrong
            key=3; // third case

            //if(countMinWrong>=4)//if they do it wrong 4 times
            //{
              //  break;//leave do while

            //}
        }

        if(key==1||key==2)//if they are one and two, not 3
            {

            cout<<endl;//space
            cout<<endl;
            cout<<"\t\tPower Bill for: "<<phoneNumber<<endl;//display you powerbill name
            cout<<"\t\t      --------------------\n";
            cout<<"\t\t      --------------------\n";
            cout<<"Total Minutes Used= "<<phoneNumberMinutes<<endl;//display phone number mins
            cout<<"I Monthly base payment : $"<<userBasePay<<endl;//show user base pay

            }
        switch(key)//switch
        {
            case 1: if(phoneNumberMinutes>FIRST_FREE_MIN_REGULAR_CUSTOMER)//did they spend more time on the phone then there base pay
                    {
                        if(phoneNumberMinutes>=FIRST_FREE_MIN_REGULAR_CUSTOMER+STAGE_1_REGULAR_CUSTOMER_TIME)//did the spend more then stage 1 time
                        {


                            RegularCustomerCostStage1=(STAGE_1_REGULAR_CUSTOMER_TIME)*STAGE_1_REGULAR_CUSTOMER_RATE;//calc the reg cost for stage 1
                            RegularCustomerCostStage2=(phoneNumberMinutes-FIRST_FREE_MIN_REGULAR_CUSTOMER-STAGE_1_REGULAR_CUSTOMER_TIME)*STAGE_2_REGULAR_CUSTOMER_RATE;//calc stage 2 cost for reg
                            RegularCustomerCost=RegularCustomerCostStage1+RegularCustomerCostStage2;//add starge one and stage 2


                        }

                        else
                        {


                            RegularCustomerCostStage1=(phoneNumberMinutes-FIRST_FREE_MIN_REGULAR_CUSTOMER)*STAGE_1_REGULAR_CUSTOMER_RATE;// if they are just stage 1 cost



                        }

                    }
                    else
                    {
                      userBasePay;//if they are just a base pay customer
                    }

                    cout<<"Cost of stage1 units: $ "<<RegularCustomerCostStage1<<endl;//display
                    cout<<"Cost of stage2 units: $ "<<RegularCustomerCostStage2<<endl;//display cost for stage 2
                    cout<<"Total Cost: $"<<userBasePay+RegularCustomerCostStage1+RegularCustomerCostStage2<<endl;//display total cost
                    break;// break out of case-switch




            case 2:if(phoneNumberMinutes>FIRST_FREE_MIN_BUSINESS_CUSTOMER)// for BIZ //did they use more mins then the free time provided
                    {
                        if(phoneNumberMinutes>=FIRST_FREE_MIN_BUSINESS_CUSTOMER+STAGE_1_BUSINESS_CUSTOMER_TIME)//if they dis and they need to pay for stage 2
                        {


                            BusinesCustomerCostStage1=(STAGE_1_BUSINESS_CUSTOMER_TIME)*STAGE_1_BUSINESS_CUSTOMER_RATE;//cost for stage 1
                            BusinesCustomerCostStage2=(phoneNumberMinutes-FIRST_FREE_MIN_BUSINESS_CUSTOMER-STAGE_1_BUSINESS_CUSTOMER_TIME)*STAGE_2_BUSINESS_CUSTOMER_RATE;//cost for stage 2



                        }

                        else
                        {


                            BusinesCustomerCostStage1=(phoneNumberMinutes-FIRST_FREE_MIN_BUSINESS_CUSTOMER)*STAGE_1_BUSINESS_CUSTOMER_RATE;//cost for stage 1



                        }

                    }
                    else
                    {
                        userBasePay;// if they just need to pay the base price
                    }

                    cout<<"Cost of stage1 units: $ "<<BusinesCustomerCostStage1<<endl; //display cost stage 1
                    cout<<"Cost of stage2 units: $ "<<BusinesCustomerCostStage2<<endl; //display cost stage 2
                    cout<<"Total Cost: $"<<userBasePay+BusinesCustomerCostStage1+BusinesCustomerCostStage2<<endl;// display total cost
                    break; //leave switch case



            case 3:
                    break;//if they enter something wrong

                //do nothing

        }


        cout<<"\n\nMore Bills?     [Y/N]: ";// do they have more bills
        cin>>moreBills;//Yes or No

    }while (moreBills=='Y'||moreBills=='y');// if yes, do it again

    cout<<"\n\nExciting the program........."<<endl;
    return 0;//end of program
}
*/




#include<iostream> //preprocesser directive for io
#include<string> //string libraty
#include<iomanip> //io manipulation libraty
using namespace std; // using std naming



int main()//main program start
{

    char moreBills;// do they want more bills
    char customerType; // what type of customer
    string phoneNumber;//what is the phone number
    int phoneNumberMinutes=0; //start with 0

    //two type of customers
    //Regular (R) and Busniess B

    //For B
    //base pay=$99.99 a month,
    //the first 600 mins are free,
    //then in stage1 it is $0.45 per min
    //stage 3 is $0.99 per min

    //For r
    // base pay is 29.99
    //first 200 mins free
    //stage 1 min are 250 with a cost of $0.55
    //Stage 2 is $0.88

    const double BASE_PAY_BUSINESS_CUSTOMER=99.99,BASE_PAY_REGULAR_CUSTOMER=29.99; //base pay for biz and reg customer
    double userBasePay=0;// final base baystart with 0
    const double FIRST_FREE_MIN_BUSINESS_CUSTOMER=600,FIRST_FREE_MIN_REGULAR_CUSTOMER=200;//in biz and reg customer mins
    const double STAGE_1_BUSINESS_CUSTOMER_RATE=0.45,STAGE_1_REGULAR_CUSTOMER_RATE=0.55 ;// in bix and reg customer stage one rates
    const double STAGE_1_BUSINESS_CUSTOMER_TIME=100,STAGE_1_REGULAR_CUSTOMER_TIME=250;// in bix and reg customer stage one minimum minutes
    const double STAGE_2_BUSINESS_CUSTOMER_RATE=0.99,STAGE_2_REGULAR_CUSTOMER_RATE=0.88 ;// for biz and reg customer stage 2 rates
    int count=0,countMinWrong=0;

    int key;//key for switch-case statment

    cout<<setprecision(2)<<fixed<<showpoint;


    do
    {//start of do while loop//start all critical cost vars to 0 at the start of the loop
        double BusinesCustomerCost=0,RegularCustomerCost=0;//need to start at 0 evay time
        double BusinesCustomerCostStage1=0,RegularCustomerCostStage1=0; //start at 0
        double BusinesCustomerCostStage2=0,RegularCustomerCostStage2=0; //start at 0
        double totalCostToUser=0; //start at 0



        cout<<"Please Enter the Customer type (R for Regular, B for Business): ";//is the customer regular or biz
        cin>>customerType;//what customer type


        if(customerType=='R'||customerType=='r') //if they are R or r
        {

            userBasePay= BASE_PAY_REGULAR_CUSTOMER;//if they are a regular customer
            key=1;//key is now 1

            cout<<"Please Enter the Customer Phone Number: ";//enter your phone number
            cin>>phoneNumber;//phone number
            cout<<"Enter the phone usage in minutes: ";// how many mins did you use
            cin>>phoneNumberMinutes;


        }
        else if(customerType=='B'||customerType=='b' )//if they are an B or B customer
        {
            userBasePay= BASE_PAY_BUSINESS_CUSTOMER;//assign the user base pay
            key=2;//makes them key 2 for the case swtich

            cout<<"Please Enter the Customer Phone Number: ";//enter phone number
            cin>>phoneNumber;
            cout<<"Enter the phone usage in minutes: ";//enter mins
            cin>>phoneNumberMinutes;


        }

        else
        {
            cout<<"invalid customer type. Please enter R, r for regular and B, b for business customers\n";//they did not put in  R,r,B,b
            cout<<"Please re-run the program correctly\n";
            key=3;//section 3 for case switch

            phoneNumberMinutes=0;//set num of mins to 0
            userBasePay=0;// base pay is 0 to because we dont know who they are
            count++;//count up

            if(count>=3)//if they enter in 3 time it will shut them off on the fourth
            {
                break;//get out of do statment

            }

        }



        if(phoneNumberMinutes<0)// if they have negative mins
        {
            cout<<"Please enter your minutes greater then or equal to zero\n";// Warnning msg
            countMinWrong++;//count up if they did it wrong
            key=3; // third case

            if(countMinWrong>=3)//if they do it wrong 4 times
            {
                break;//leave do while

            }
        }

        if(key==1||key==2)//if they are one and two, not 3
            {

            cout<<endl;//space
            cout<<endl;
            cout<<"\t\tPower Bill for: "<<phoneNumber<<endl;//display you powerbill name
            cout<<"\t\t      --------------------\n";
            cout<<"\t\t      --------------------\n";
            cout<<"Total Minutes Used= "<<phoneNumberMinutes<<endl;//display phone number mins
            cout<<"I Monthly base payment : $"<<userBasePay<<endl;//show user base pay

            }
        switch(key)//switch
        {
            case 1: if(phoneNumberMinutes>FIRST_FREE_MIN_REGULAR_CUSTOMER)//did they spend more time on the phone then there base pay
                    {
                        if(phoneNumberMinutes>=FIRST_FREE_MIN_REGULAR_CUSTOMER+STAGE_1_REGULAR_CUSTOMER_TIME)//did the spend more then stage 1 time
                        {


                            RegularCustomerCostStage1=(STAGE_1_REGULAR_CUSTOMER_TIME)*STAGE_1_REGULAR_CUSTOMER_RATE;//calc the reg cost for stage 1
                            RegularCustomerCostStage2=(phoneNumberMinutes-FIRST_FREE_MIN_REGULAR_CUSTOMER-STAGE_1_REGULAR_CUSTOMER_TIME)*STAGE_2_REGULAR_CUSTOMER_RATE;//calc stage 2 cost for reg
                            RegularCustomerCost=RegularCustomerCostStage1+RegularCustomerCostStage2;//add starge one and stage 2


                        }

                        else
                        {


                            RegularCustomerCostStage1=(phoneNumberMinutes-FIRST_FREE_MIN_REGULAR_CUSTOMER)*STAGE_1_REGULAR_CUSTOMER_RATE;// if they are just stage 1 cost



                        }

                    }
                    else
                    {
                      userBasePay;//if they are just a base pay customer
                    }

                    cout<<"Cost of stage1 units: $ "<<RegularCustomerCostStage1<<endl;//display
                    cout<<"Cost of stage2 units: $ "<<RegularCustomerCostStage2<<endl;//display cost for stage 2
                    cout<<"Total Cost: $"<<userBasePay+RegularCustomerCostStage1+RegularCustomerCostStage2<<endl;//display total cost
                    break;// break out of case-switch




            case 2:if(phoneNumberMinutes>FIRST_FREE_MIN_BUSINESS_CUSTOMER)// for BIZ //did they use more mins then the free time provided
                    {
                        if(phoneNumberMinutes>=FIRST_FREE_MIN_BUSINESS_CUSTOMER+STAGE_1_BUSINESS_CUSTOMER_TIME)//if they dis and they need to pay for stage 2
                        {


                            BusinesCustomerCostStage1=(STAGE_1_BUSINESS_CUSTOMER_TIME)*STAGE_1_BUSINESS_CUSTOMER_RATE;//cost for stage 1
                            BusinesCustomerCostStage2=(phoneNumberMinutes-FIRST_FREE_MIN_BUSINESS_CUSTOMER-STAGE_1_BUSINESS_CUSTOMER_TIME)*STAGE_2_BUSINESS_CUSTOMER_RATE;//cost for stage 2



                        }

                        else
                        {


                            BusinesCustomerCostStage1=(phoneNumberMinutes-FIRST_FREE_MIN_BUSINESS_CUSTOMER)*STAGE_1_BUSINESS_CUSTOMER_RATE;//cost for stage 1



                        }

                    }
                    else
                    {
                        userBasePay;// if they just need to pay the base price
                    }

                    cout<<"Cost of stage1 units: $ "<<BusinesCustomerCostStage1<<endl; //display cost stage 1
                    cout<<"Cost of stage2 units: $ "<<BusinesCustomerCostStage2<<endl; //display cost stage 2
                    cout<<"Total Cost: $"<<userBasePay+BusinesCustomerCostStage1+BusinesCustomerCostStage2<<endl;// display total cost
                    break; //leave switch case



            case 3:
                    break;//if they enter something wrong

                //do nothing

        }


        cout<<"\n\nMore Bills?     [Y/N]: ";// do they have more bills
        cin>>moreBills;//Yes or No

    }while (moreBills=='Y'||moreBills=='y');// if yes, do it again

    cout<<"\n\nExciting the program........."<<endl;
    return 0;//end of program
}




