//checkpoint problems
//5.2
// Daniel Cohen
#include<iostream> //preprocesser directive for io
#include<string>
#include<cctype>
using namespace std; // using std naming


void stringCompareTesting();
void readingKeyboardStrings();
void salesCalcAvg();
void doWhileTesting();
void passwordCreater();
void maxCitypopulation();
int sequentilSearch(int a[],int item);
double larger(double x,double y);
void arrayMinFinder(int [],int &,int);
void doWhileTesting2();
void starProgram();
void stringTesting();
void trueFalseTesting();
void swapValue(int , int);
void swapReference(int &, int &);








int main()//main program start
{



    //stringCompareTesting();
    //readingKeyboardStrings();
    //salesCalcAvg();
    //doWhileTesting();
    //passwordCreater();
    //maxCitypopulation();

   //int a[5]={1,3,4,5,0};
   //int MinNum=0;
   //arrayMinFinder(a,MinNum,5);
   //cout<<MinNum;
    //int item=3;
    //int index;

    //index=sequentilSearch(a,item);
    //cout<<index;
    //double z;
    //z= larger(10,12);
    //cout<<z;
    //doWhileTesting2();
    //cout<<'$'<<endl;
    //cout<<toupper(tolower('$'))<<endl;
    //cout<<isupper('$')<<endl;
    /*
    int alpha=5;
    int beta=10;
    alpha+=5;
    {

        int alpha=20;
        beta+=5;
    }
    cout<<alpha<<" "<<beta;
    */

    //starProgram();
    //stringTesting();
    //trueFalseTesting();
    //int i =10,n = 20;
    //swapValue(i, n);
    //cout<<i <<"\t" << n<<endl; //---1

    //i =10,n = 20;
    //swapReference(i, n);
    //cout<<i <<"\t" << n<<endl; //---2

    //double alpha;

    //alpha=14.0+static_cast<double>(15/2);

    //cout<<alpha;


    //cout<<(6<5||'g'>'a'&&7<4);


    //int x=4,y=4,z=4;
    //x+=2;
    //y=z++;
    //z=++x+y;
    //cout<<x<<" "<<y<<" "<<z<<endl;

    for(int i=1;i<=10;i++)
    cout<<i<<" ";








    return 0;//end of program

}



 void swapValue(int a, int b)
{
    int temp = a;

    a = b ;

    b = a;

}

void swapReference(int &a, int &b)
{
    int  temp = a;
    a = b;
    b =  temp;


}






void trueFalseTesting()
{
    int x=3;
    int y=7;
    int z=10;

    if(y>x||z<x&&z>y)
    {
        cout<<true;
    }




}


void stringTesting()
{
    int sum=0;
    int countNum=0;
    string userEntered="I have a fun car, what do you drive? LOL 456";

    for(int i=0;i<userEntered.length();i++)
    {
        if(isupper(userEntered[i]))
           {
               countNum++;


           }





    }
     cout<<countNum;
    cout<<"Enter String"<<endl;
    getline(cin,userEntered);

    for(int i=userEntered.length()-1;i>=0;i--)
    {

        cout<<userEntered[i];


    }



}







void starProgram()
{
    //create a star pattern with one for loop then two

    for(int i=0;i<5;i++)
    {
        cout<<"*****"<<endl;

    }

    cout<<"second for loop"<<endl;

    for(int k=0;k<5;k++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"*";

        }
        cout<<endl;


    }



}



void doWhileTesting2()
{

    int count=0,number=0,limit=4;

    do
    {
        number+=2;
        count++;


    }while(count<limit);
    cout<<number<<" "<<count<<endl;



}



void stringCompareTesting()
{

    string str1="Taxi",str2="TaxiCab";

    //cout<<(str1==str2)<<endl;//works
    //cout<<str1==str2<<endl;//Does not work

    cout<<"str1 vs str2"<<endl;

    cout<<(str1.compare(str2))<<endl;


}




void readingKeyboardStrings()
{
    //Enter any info
    //test case: This is my first C++ program.
    string myString1,myString2;

    char myChar1,myChar2;
    cout<<"Enter a string :";
    cin>>myString1;
    cin.get(myChar1);
    cin>>myChar2;
    getline(cin,myString2);



    cout<<myString1<<"\t"<<myChar1<<"\t"<<myChar2<<"\t"<<myString2;



}


void doWhileTesting()
{


    int counter=0;

    do
    {
        if(counter<5)
        {
            cout<<counter<<endl;
            //counter++;
            continue;//This will just by pass to the condition check
            //counter++;


        }
        else
        {
            counter++;

        }



    }while(counter==0);



}



void salesCalcAvg()
{
    double sales=0;
    double salesSum=0;
    int numberOfDays;
    cin>>numberOfDays;


    for(int i=0;i<numberOfDays;i++)
    {
        cin>>sales;
        salesSum+=sales;


    }

    cout<<(sales/numberOfDays);


}

void passwordCreater()
{

    string inputString="";
    //string password="";
    string uAdder="";
    string uAdderRev="";
    int counter=0;

    cout<<"Enter a important life statment and we will make as password out of it"<<endl;
    getline(cin,inputString);

    for(int i=0;i<inputString.length();i++)
    {

        if(isupper(inputString[i]))
        {

            uAdder=uAdder+inputString[i];


        }
        else
        {

            counter++;

        }

    }

    cout<<uAdder<<counter;



}


void maxCitypopulation()
{
    const int SIZE=5;
    string cityNames[SIZE]={"A","B","C","D","E"};
    int population[SIZE]={500,1000,888,333,992};

    int maxIndex=0;//assume to start with;
    int minIndex=0;

    for(int i=0;i<SIZE;i++)
    {
        if(population[maxIndex]<population[i])
            maxIndex=i;

        if(population[minIndex]>population[i])
            minIndex=i;



    }

    cout<<"Max pop "<<population[maxIndex]<<" is in "<< cityNames[maxIndex]<<" city."<<endl;
    cout<<"Min pop "<<population[minIndex]<<" is in "<< cityNames[minIndex]<<" city."<<endl;






}

int sequentilSearch(int a[],int item)
{

    int index=-1;
    bool found=false;
    int arraySize=sizeof(a)/sizeof(a[0]);//does not work right
    arraySize=5;


    for(int i=0; i<arraySize;i++)
    {
        if(a[i]==item)
        {

            found=true;
            index=i;
            break;
        }





    }


    return index;

}

double larger(double x,double y)
{

    double maxNumber;
    if(x>=y)
        maxNumber=x;
    else
        maxNumber=y;

    return maxNumber;


}

void arrayMinFinder(int a[],int &min_number,int sizeOfArray)
{
    min_number=0;
    for(int i=0;i<sizeOfArray;i++)
    {
        if(a[min_number]>a[i])
        {

            min_number=i;

        }


    }




}








