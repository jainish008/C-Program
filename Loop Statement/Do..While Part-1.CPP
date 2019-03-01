//Program to print number from 1 to 10 (do while loop)
//header files
#include<iostream.h>
#include<conio.h>
void main()    // start point of execution
{		//open body of program
	clrscr(); // clears the console screen history
	int x=0; //initializing
	do{ //do while loop body
	cout<<"Number  "<<x<<endl;
	x++;
	}while(x<=10);

	getch();  //holds console screen
}