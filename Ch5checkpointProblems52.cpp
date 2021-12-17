//checkpoint problems
//5.2
// Daniel Cohen
#include<iostream> //preprocesser directive for io
using namespace std; // using std naming

int main()//main program start
{

    int num;
    cout<<"enter a number in the range of 10-25"<<endl;
    cin>>num;

    while(num<10 || num>25)
    {
        cout<<"Error"<<endl;
        cin>>num;



    }





    return 0;//end of program
}
