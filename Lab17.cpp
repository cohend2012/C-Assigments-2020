// Daniel Cohen
//LAB17
//Creating a OOP (object orentaied program to create and alter your bank account by adding and subtracking money
//This program will focus on a Class class Account
#include<iostream>//input and output libray
#include <string>// string manipulation
#include <iomanip>// output manipulation
using namespace std;//using std naming
//#include "Account.h" dont need if all is in the same C++ document

class Account { //class

	public: //public member functions

		double getBalance();// return double get's the current balance
		void deposit(double ammount); //deposit money no return
		void withdraw(double ammount); //withdraw money, no return
		Account();//default
		Account(double balance,double interestRate,int accountNumber,string ownerName);//main way to setting up the object of class account
		void displayAccountSummary();//displaying account info fuction
		void addInterest();//adding interest to the balance

	private: //private attributes
		double balance; //balance in the account
		int accountNumber; //account number for the bank account
		string ownerName; //The name on the account
		double interestRate;// interest Rate



};

 //***************************************************************************************
 //     Function: getBalance(): This function gets the balance of the bank account
 //
 //
 //     sample case: getBalance()
 //     Input:Empty list, NO input
 //     Output: balance
 //
 //**************************************************************************************

double Account::getBalance()//function to get the balance on the account
{
	return balance;// balance of the account


}

 //***************************************************************************************
 //     Function: withdraw(double ammount): This function the user allows subtract a given amount from account
 //
 //
 //     sample case: withdraw(double ammount)
 //     Input:double ammount
 //     Output: void
 //
 //**************************************************************************************

void Account::withdraw(double ammount) //withdrawing money from account
{

	balance = (balance - ammount);// taking money out of the account


}



 //***************************************************************************************
 //     Function: deposit(double ammount): This function allows the user to deposit money in their account,
 //                                          this will be added to the current balance
 //
 //
 //     sample case: deposit(double ammount)
 //     Input:double ammount
 //     Output: void
 //
 //**************************************************************************************


void Account::deposit(double ammount)//adding money to the account
{
	balance = (balance + ammount);//adding money

}

 //***************************************************************************************
 //     Function: addInterest(): This function will add interest to you balance
 //
 //
 //
 //     sample case: addInterest()
 //     Input:double ammount
 //     Output: void
 //
 //**************************************************************************************

void Account::addInterest()//adding interest to the account
{

	balance = balance * (1 + interestRate);//adding interest rate

}

//***************************************************************************************
 //     Function: displayAccountSummary(): This function displays the account info
 //
 //
 //
 //     sample case: displayAccountSummary()
 //     Input:d empty list
 //     Output: void
 //
 //**************************************************************************************


void Account::displayAccountSummary()//displaying info
{
	cout << "Output:" << endl;
	cout << "Account Number: " << accountNumber <<endl;//account number display
	cout << "Owner's Name:   " << ownerName << endl;//display the owner's name
	cout<<setprecision(3)<<fixed;
	cout << "Balance:        " << balance << endl;//display balance
	cout<<setprecision(0)<<fixed;
	cout << "Interest Rate :" << interestRate*100.00 <<"%"<< endl;//convert to percent and not dec

}

//***************************************************************************************
 //     Default Constructor: Account(): This will set all the info to 0 or empty
 //                                           It is a blank account.
 //
 //
 //     sample case: Account
 //     Input: empty list
 //     Output: void
 //
 //**************************************************************************************

// Account Class implementation
Account::Account() //default
{
	balance = 0.0;//start with a balance of 0
	accountNumber = 0; // account number is 0
	ownerName = "";//name will be blank
	interestRate = 0.0; //interestRate will be 0 as well

}
//************************************************************************************************************************************************************
 //      Constructor: Account(double newBalance, double newInterestRate, int newAccountNumber, string newOwnerName):
 //      Discripstion: This constuctor will take in a newBalance,newInterestRate,newAccountNumber,and newOwnerName to set up a new bank account
 //
 //
 //     sample case: Account(double newBalance, double newInterestRate, int newAccountNumber, string newOwnerName)
 //     Input:double newBalance, double newInterestRate, int newAccountNumber, string newOwnerName
 //     Output: void
 //
 //***********************************************************************************************************************************************************

//Account::Account( ) constructor
Account::Account(double newBalance, double newInterestRate, int newAccountNumber, string newOwnerName)//if they want to enter their info
{
	balance= newBalance;//the balance will be newBalance
	accountNumber = newAccountNumber;//the account number will be newAccountNumber
	ownerName = newOwnerName;// the owners name is the NewOwnerName
	interestRate = newInterestRate; //getting the newInterestRate  for set up

}
//************************************************************************************************************************************************************
 //     Start of main program
 //
 //***********************************************************************************************************************************************************

int main()//main start
{

	Account myAccount(1000.50, 0.05, 1111, "John William");//entering in data to constrcutor
	myAccount.deposit(500);//deposit money
	myAccount.withdraw(200);//take money out
	myAccount.addInterest();//add interest
	myAccount.displayAccountSummary();// display all the info

    /*
    Account myAccount2;
    myAccount2.deposit(500);
	myAccount2.withdraw(200);
	myAccount2.addInterest();
	myAccount2.displayAccountSummary();
	*/


	return 0;//end of main



}
