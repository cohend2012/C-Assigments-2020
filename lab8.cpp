//lab8.cpp
//Lab8 print "I love computer Science!!" 10 times using while loops and given templet
// Daniel Cohen
//
// **************************************************************** //
//   Use a while loop to print many messages declaring your
//   passion for computer science // ****************************************************************

//Expected output 1 3 5 7 9    Observed Output 1 3 5 7 9
//                5 4 3 2 1                    5 4 3 2 1

// After loop i=11              After loop i=11

// After loop i=0                After loop i=0




#include<iostream> //preprocesser directive for io
using namespace std; // using std naming

int main()//main program start
{

     // *** Step 2: Create an int called numTimes
    // *** Step 2: Get rid of this, prompt the user for numTimes instead
    int numTimes; //how many times do you want it displayed
    cout<<"How any times should I print? "; //display on monitor how many times
    cin>>numTimes;// how any times

    int count = 1;// start count at 1
    // *** Step 2: Change this to check if count is <= numTimes
    while(count <= numTimes) // run while count is less then or equal to number of times
    {
        // *** Step 2: Change this line to output count before the phrase
        cout<<count<<' '<<"I love Computer Science!!"<<endl; //display the count and a  that I love computer sci
          // *** Step 1: Increment count (hint: use the ++ operator)
        count++; //add to count;
    }

      // *** Step 2: Output the "Printed this message..." line
    cout<<"Printed  this message "<<--count<<" times.";//print how many times we have displayed the msg

    return 0;//end of program
}
