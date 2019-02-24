//Program of to see number is positive or negative (Conditional Statements)
//Header File
#include<iostream.h>
#include<conio.h>
void main()     // start point of execution
{  //open body of program
	clrscr();   //clear the history of console screen
	int a=0; //initializing of variable
	cout<<"Enter a number"<<endl;
	cin>>a;
	if(a>=0) //condition in if statement. % modulus and = is relational operator
	{
	cout<<"Number is positive "<<endl;
	}
	else
	{
	cout<<"Number is negative "<<endl;
	}
	getch();
}    //close body of program
