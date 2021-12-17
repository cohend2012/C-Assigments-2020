//extraCredit1.cpp
//Dan Cohen
// Calculate the cost of a haircut given base price and posible discounts
// using else-if
//
//

#include <iostream> //preprocesser directive for io
#include <string> // include preprocess directive for string
#include <cctype> //  include the cctype preprocesser
using namespace std; // using std naming

int main()//start of main program
{

    int couponColor;// create variable for a string for the coupon color
    string haircutTypeAdultOrKid; //variable for if the haircut is for an adult or kid
    string green="Green", blue="Blue"; //create a variable for the blue coupon and green
    string adult="adult",kid="kid"; //create a variable for if they enter a adult or kid
    string noCoupon="No Coupon";//if they do not have a coupon
    const double GREEN_DISCOUNT_ADULT=3.50,GREEN_DISCOUNT_KID=2.50;//const for the green discount for an adult and green discount for a kid
    const double BLUE_DISCOUNT_ADULT=2.59,BLUE_DISCOUNT_KID=1.50; //const for the blue discount for an adult and for the blue discount for kid
    const double ADULT_PRICE=15.50,KID_PRICE=10.50;//const for adult and kid price
    double total=0; //total price of haircut, to be calculated

    cout<<"Do you have a coupon for your haircut today?\n"; //asking if the user has any coupons
    cout<<"If you do not please enter, 0"<<endl; // if they dont have a coupon
    cout<<"Please enter #1 for Green and #2 for Blue "; //is it Blue or Green

    cin>>couponColor;//take in the coupon color



    if(couponColor==0)
    {

        cin.ignore(5,'\n');//clear no line char

        cout<<"Is your haircut for a adult or a kid"<<endl;//adult or kid haircut

        getline(cin,haircutTypeAdultOrKid);//take in the haircut type, adult or kid

        if(haircutTypeAdultOrKid.compare(adult)==0)//is it an adult
        {
            //cout<<greenDiscountAdult<<endl;
            total=ADULT_PRICE;//total price for green and adult
             cout<<"The total price is: $"<<total<<endl;//display the total price

        }
        else if(haircutTypeAdultOrKid.compare(kid)==0)//total price for green and kid
        {
           // cout<<greenDiscountKid<<endl;
            total=KID_PRICE;//determine kid price with green discount
            cout<<"The total price is: $"<<total<<endl;

        }



    }

    else if(couponColor==1) //is the coupon green
    {
        cin.ignore(5,'\n');//clear no line char
        cout<<"Is your haircut for a adult or a kid"<<endl;//adult or kid haircut

        getline(cin,haircutTypeAdultOrKid);//take in the haircut type, adult or kid


        if(haircutTypeAdultOrKid.compare(adult)==0)//is it an adult
        {
            //cout<<greenDiscountAdult<<endl;
            total=ADULT_PRICE-GREEN_DISCOUNT_ADULT;//total price for green and adult
             cout<<"The total price is: $"<<total<<endl;//display the total price

        }
        else if(haircutTypeAdultOrKid.compare(kid)==0)//total price for green and kid
        {
           // cout<<greenDiscountKid<<endl;
            total=KID_PRICE-GREEN_DISCOUNT_KID;//determine kid price with green discount
            cout<<"The total price is: $"<<total<<endl; //display price

        }

        else
        {
            return -1; //they did not enter in the right info and the two other selection statments did not work
        }

    }
    else if(couponColor==2)// for a blue coupon
    {
        cin.ignore(5,'\n');//clear new line char
        cout<<"Is your haircut for a adult or a kid"<<endl;//adult or kid haircut

        getline(cin,haircutTypeAdultOrKid);//take in the haircut type, adult or kid


        if(haircutTypeAdultOrKid.compare(adult)==0)//blue and and an adult
        {

            total=ADULT_PRICE-BLUE_DISCOUNT_ADULT; //price for a blue adult
             cout<<"The total price is: $"<<total<<endl; //display price
        }
        else if(haircutTypeAdultOrKid.compare(kid)==0)//if they are a kid
        {

            total=KID_PRICE-BLUE_DISCOUNT_KID;//if they are a blue kid
            cout<<"The total price is: $"<<total<<endl;// show price
        }

        else
        {
            return -2;//if something went wrong
        }


    }

    else
    {

        cout<<"please try again"<<endl;//something went wrong

    }





    return 0;//end of program
}
