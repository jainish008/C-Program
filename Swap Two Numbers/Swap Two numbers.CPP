//Program to swap two numbers
//header files
#include<iostream.h>
#include<conio.h>
void main()        //start point of execution
{
	clrscr(); // clears history of console screen
	int a=5,b=10,temp;
	cout<<"Before Swapping Numbers "<<endl;
	cout<<"	"<<a<<"	"<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swapping numbers"<<endl;
	cout<<"	"<<a<<"	"<<b;
	getch(); //holds the console screen
}