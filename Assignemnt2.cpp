//Assignment2.cpp
//Assignments 2 contains Problem 1,(Velocity of sound in air)2,Arithmaetic operators and precedence
//3 reading strings from keyboards, 4 Madlib program
// Daniel Cohen


/*
#include <iostream> //preprocesser directive for io
#include <string> //preprocess directive for string info
using namespace std; // using std naming


//1
int main()
{
    const double INTERCEPT_FACTOR=331.3,SLOPE_FACTOR=0.61; //The equation is for a line so we are using the same naming. SLOPE and INTERCEPT

    double velocity,tempC;//creating our variables for the temp in celsius and the velocity in m/s

    cout<<"What is the air temp in Celsius? "<<endl;//output , what is the air temp
    cin>>tempC;//getting the temp in Celsius

    velocity = INTERCEPT_FACTOR+SLOPE_FACTOR*tempC;//calculating the velocity given the provided info

    cout<<"The velocity of the sound is "<<velocity<<" m/s"<<endl;//out put the veloicty


    return 0;//end of program
}

*/
/*

//QUESTION 2
//2
//6
//22
//12
//16

#include <iostream> //preprocesser directive for io
#include <string>
using namespace std; // using std naming

int main()
{

    cout<<(3+4-5);
    cout<<4+4*3/6;
    cout<<6+12*2-8;
    cout<<6+12*(2-8);
    cout<<(19-3)*(2+2)/4;



    return 0;


}
*/

/*
//QUESTION 4
//myString1 = "This"
//myChar1 = ' ' blank place char
//myChar2 = 'i'
//myString2= "s my first C++ program."

#include <iostream> //preprocesser directive for io
#include <string> //include string preprocesser directive
using namespace std; // using std naming

int main()
{

    string myString1,myString2;//creating string vars
    char myChar1,myChar2;//creating char vars

    cout<<"Enter a string: ";//enter a string
    cin>>myString1; //----------1 (first one) grabs string
    cin.get(myChar1);//grabs next char up, it is blank
    cin>>myChar2;// grabs next char, i
    getline(cin,myString2);//grabs the next string with spaces



    cout<<myString1<<"\t"<<myChar1<<"\t"<<myChar2<<"\t"<<myString2<<endl; //output left to right

    cout<<myString1<<"\n"<<myChar1<<"\n"<<myChar2<<"\n"<<myString2;// output from top to bottom




    return 0;//done

}

*/



#include <iostream> //preprocesser directive for io
#include <string>
using namespace std; // using std naming

int main()//start of program
{
    string nameOfInstructor,yourName,yourFood,number,adjective,color,animal; //string I will need in the program for I/O


    cout<<"Enter the name of the instructor: "; //Name of your instructor
    getline(cin,nameOfInstructor);// get the sting you enter for the name of the instructor


    cout<<"Your Name: ";//What is your name
    getline(cin,yourName);//get your name as a string


    cout<<"A food: ";// what food do you want to enter
    getline(cin,yourFood);//get food as a string

    cout<<"A number between 100 and 120: ";//what temp of a fever do you have
     getline(cin,number);// get the number you enter as a string

    cout<<"An adjective: ";//what adjective would you like to enter
    getline(cin,adjective);// get the adjective as a string


    cout<<"A color: ";//what color did turn when you had that food
    getline(cin,color);// get the color you tuned

    cout<<"An animal: ";//What animal is you pet
    getline(cin,animal);//gather the user input as a string
    cout<<endl;





    cout<<"Dear Instructor "<<nameOfInstructor<<","<<endl;//start of the output tab ober
    cout<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten "<<yourFood<<","<<endl;
    cout<<"which made me turn "<<color<<" and extremely ill. I come down with a fever of "<<number<<"."<<endl;
    cout<<"Next, my "<<adjective<<" pet "<<animal<<" must have smelled the remains of the "<<yourFood<<" on my "<<endl;
    cout<<"homework, because he ate it. I am currently rewriting my homework and hope you will accept it "<<endl;
    cout<<"here."<<endl;
    cout<<endl;
    cout<<"Sincerely, \n"<<yourName;






    return 0;//end of program
}



