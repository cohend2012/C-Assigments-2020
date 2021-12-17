// Daniel Cohen
//lab10.cpp
//count how many chars of a given string exist, count uppercase, lowercase, total char

#include<iostream> //preprocesser directive for io
#include<cctype>   //cctype libray for character related funtions
using namespace std; // using std naming

int main()//main program start
{
    char keyEntered; //centinal char we will be looking for when entered
    string fullInput;//we will be taking the full input in as a string
    int uppercaseCount=0;//start uppercase count to zero
    int lowercaseCount=0;//start lowercase count to zero
    int digitCount=0;//start digit count to zero
    //int alphaCount=0;// start the count for chars in the alphabet
    int charCount=0;// notal char count




    while(keyEntered!='#')//centinal
    {
        cout<<"Enter your information\n";//Prompt user to enter the user info
        getline(cin,fullInput);//get the full input from the user
        charCount+=fullInput.length();//how many chars is it has found



        for(int i=0;i<fullInput.length();i++)//from a index of 0 to the full length in increments of one
        {


        if(fullInput[i]=='#') // if they input the right char
            {
                keyEntered='#'; //now key entered in # Program needs to display results and end
                cout<<"Char total :"<<--charCount<<endl; // displaying results// will have to subtract 1 becuase # is a char

                cout<<"Digit Total :"<<digitCount<<endl; //total digit count
                cout<<"lowercase Total :"<<lowercaseCount<<endl;
                cout<<"uppercase Total :"<<uppercaseCount<<endl;

                break; //get out of for loop, then key entered will be checked, program will then end
            }

        else
            {

                if(isupper(fullInput[i]))//if it uppercase it will be true
            {
                    ++uppercaseCount;//increase the uppercase count by one

            }

                if(islower(fullInput[i]))//if it is lowercase it will be true
            {
                    ++lowercaseCount;//increase the lowercase count by one

            }

                if(isdigit(fullInput[i]))// if the input is a digit then it will be try
            {
                    ++digitCount;//increase the digit count by one if try

            }

            //if(isalpha(fullInput[i]))// if the input is alphabet it it will be true
            //{
            //    ++alphaCount;//increase the alphabetic count by one

           // }


            }



        }



    }


    return 0;//end of program
}
