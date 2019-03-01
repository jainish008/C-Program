//Program to print the numbers from 10 to 0 in(reverse order)
//header files
#include<iostream.h>
#include<conio.h>
void main()    // start point of execution
{                //open body of program
	clrscr(); //clears the console screen history
	int a=10; //intializing the variable
	while(a>=0)        //condition
	{   //body of while loop
	cout<<"Number	"<<a<<endl;
	a = a-1; //decrement. Yes we can also do decrement another symbol of -1 decrement is -- and for increment +1 is ++
	}
	getch(); //holds the console screen
}               //close body of program