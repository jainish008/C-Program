//Program to print number from 10 to 1 (do while loop)
//header files
#include<iostream.h>
#include<conio.h>
void main()    // start point of execution
{		//open body of program
	clrscr(); // clears the console screen history
	int x=10; //initializing
	do{ //do while loop body
	cout<<"Number  "<<x<<endl;
	x--;
	}while(x>=1);

	getch();  //holds console screen
}