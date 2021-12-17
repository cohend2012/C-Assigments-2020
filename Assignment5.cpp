// Daniel Cohen
//Assignment5.cpp
//This  program will compare compare the correct anwsers from a driver test to the answers entered in the program. If they get 80% or more right
//then they pass if not they fail. Also if they enter letters (A-D) That is ok, if not then they it will give them a warning, if they do that three times it will leave the program.

//a. 10 20

//b. 20 10

//c. In a. statement 1, they are passing by value so the variables a and b may be copied by the function but can not be changes.
// However, in part b, statement 2, a and b are being passed by reference as thus the function can change the value of a and b and store new ones. In this case it swaps the values.



//Part B.
//This  program will compare compare the correct anwsers from a driver test to the answers entered in the program. If they get 80% or more right
//then they pass if not they fail. Also if they enter letters (A-D) That is ok, if not then they it will give them a warning, if they do that three times it will leave the program.



#include<iostream> //preprocesser directive for io
#include<string> //string libraty


using namespace std; // using std naming
bool grade(char correctAnswers[],char studentAnswers[],int &totCorrectAnswers, int SIZE);//protoype for grade function
//This function



int main()//main program start
{

    const int SIZE=10;//4 cities

    char correctAnswers[SIZE]={'B','D','A','A','C','A','B','A','C','D'};//the correct answers to the test in the char array
    char studentAnswers[SIZE];//student answers
    bool wrongAnwser=false ;//starting with 0 wrong entries
    int  wrongCount=0;//wrong count start at 0
    bool userPassFail;//if the user passed or fail
    int totCorrectAnswers=0;//number of tot correct answers


    cout<<"Hello and Welcome to the Driver's License Exam Grader "<<endl;//saying hello to the user



    for(int index=0; index<SIZE && wrongCount<=3 ;index++) // start of for loop//if the index is less the size and if they enter less then three wrong answers

    {

        do{


            cout<<"Please enter your answer for question "<<(index+1)<<" ";//Asking for the answer to the quote
            cin>>(studentAnswers[index]);//storing the answer



            switch(studentAnswers[index])//creating a switch case logic to determine if they entered the good or bad letter
            {


                case 'A'://good keep going


                case 'B'://good keep going


                case 'C'://good keep going

                case 'D'://good keep going

                    wrongAnwser=false; //good keep going
                    break;//leave switch case


            default://bad letter entered

                wrongCount++;//add to count to keep track
                wrongAnwser=true;//flag that they entered the wrong letter so we need to go back and ask again
                cout<<"A,B,C,and D are the only valid inputs"<<endl;//remind user to enter the right info
                break;//leave switch case

            }


        }while(wrongAnwser && wrongCount<=3);//keep going if they give you the wrong info  they have not entered the wrong info three times

    }

    if(wrongCount>=4)// if they enter the wrong letter a forth time
    {
        cout<<"GOOD BYE"<<endl;//good bye and end the program
        return 0;//return o and end program


    }
    else//if they dont enter 4 bad letters
    {

        userPassFail=grade(correctAnswers,studentAnswers,totCorrectAnswers,SIZE);//determine if the user passes or fails

        if(userPassFail==true)//if they pass
        {
            cout<<endl;
            cout<<"Congratulations!"<<endl;//they pass

        }
        else
        {
            cout<<endl;
            cout<<"Sorry,you have not passed the exam!"<<endl;// if they don't pass

        }

        cout<<"Total number of correct answers:<"<<totCorrectAnswers<<">"<<endl;//how many correct answers
        cout<<"Total number of incorrect answers:<"<<SIZE-totCorrectAnswers<<">"<<endl;//how many wrong answers



    }


    return 0;//end program

}




//***************************************************************************************
//  Function: grade(char correctAnswers[],char studentAnswers[],int &totCorrectAnswers,int SIZE)
//  Description: This function calculates if the user has passed or failed
//
//     sample grade(char correctAnswers[],char studentAnswers[],int &totCorrectAnswers,int SIZE)
//     Input: char correctAnswers[],char studentAnswers[],int &totCorrectAnswers,int SIZE
//     Output: bool passFail
//**************************************************************************************


bool grade(char correctAnswers[],char studentAnswers[],int &totCorrectAnswers,int SIZE)//function to determine if they pass or fail
{
    bool passFail;// var if they pass or fail

    for(int i=0;i<SIZE;i++)//for loop to count
    {

        if(correctAnswers[i]==studentAnswers[i])//check if each answer is right. If it is not right then it is wrong
        {

            totCorrectAnswers++;//count how many correct
        }

    }

    if(totCorrectAnswers>=8)//if they get 8 or more right answers
    {
        passFail=true;//if they pass

    }
    else
    {
        passFail=false;//if they pass

    }


    return passFail;//return the var
}




