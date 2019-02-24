//Program nested if..elseif..else statement
//header files
#include<iostream.h>
#include<conio.h>
void main()   //start point of execution
{                                       //body start
	clrscr();  //clear console screen history
	int a;
	cout<<"Enter Number to check condition	"<<endl;
	cin>>a;        //user input and that is why we have not initialize the variable
	if(a>0)         //first condition
	{
	cout<<"The number is positive integer	"<<endl;
	}
	else if(a<0)       //second condition
	{
	cout<<"The number is negative integer	"<<endl;
	}
	else                 //else statement
	{
	cout<<"The number is enter is zero     	";
	}

	getch();             // to hold console screen
}