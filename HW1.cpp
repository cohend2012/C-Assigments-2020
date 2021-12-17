//HW1.cpp
//HW1 read the height of a person (ft and in) and disply the ideal weight  for a man or women
// Daniel Cohen
#include<iostream> //preprocesser directive for io
using namespace std; // using std naming

int main()//main program start
{
		const int FACTOR_FEMALE_FEET=100,FACTOR_FEMALE_INCHES=5;//Female factor for feet and inches
		const int FACTOR_MALE_FEET=106,FACTOR_MALE_INCHES=6;//Males factor for feet and inches
		const int FACTOR_INCHES_2_FEET=12;//conversion from feet to inches. 12 inches in 1 foot
		const int HEIGHT_FACTOR_FIVE_FEET=5;//HW1 document show we need a baseline hight of 5 feet
		const int HEIGHT_FACTOR_60_INCHES=HEIGHT_FACTOR_FIVE_FEET*FACTOR_INCHES_2_FEET;// coverting our high base line into 60 inches

		int userHeightFeet,userHeightInches;//define user inputs as type int
		cout<<"Please Enter your height (feet inch) : ";//asking user how tall the person we want to mesure is
		cin>> userHeightFeet>>userHeightInches;//taking in the users input height in ft and inches


        int hightOverSixyInches=((userHeightFeet*FACTOR_INCHES_2_FEET)+userHeightInches)-HEIGHT_FACTOR_60_INCHES;//calculating the hight of the user over the 60" mark
        //this calculation was done here to simplify the math to calculate the ideal weight

        int idealWeightFemale=FACTOR_FEMALE_FEET+FACTOR_FEMALE_INCHES*hightOverSixyInches;//The hight over 60 inches is now only calculated once
        //calculating the ideal weight for a female given the user height
        int idealWeightMale=FACTOR_MALE_FEET+FACTOR_MALE_INCHES*hightOverSixyInches;
        //calculating the ideal weight for a male given the users height


        cout<<"If you are male, your ideal weight should be "<<idealWeightMale<<" pounds."<<endl;// display the ideal male weight
        cout<<"If you are female, your ideal weight should be "<<idealWeightFemale<<" pounds."<<endl;// displaying the ideal female weight




		return 0;//end of program
}
