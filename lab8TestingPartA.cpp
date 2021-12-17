//checkpoint problems
//5.2
// Daniel Cohen
#include<iostream> //preprocesser directive for io
#include<cstring>
using namespace std; // using std naming

int main()//main program start
{

char str[] = "CSE 100 Fall 2014";

int i,length;
length=strlen(str);

for(i=length-1;i>=0;i--)
{
    cout<<str[i];

}




    return 0;//end of program
}


