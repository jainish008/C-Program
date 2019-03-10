//To find Factorial of any number.
//header files
#include<iostream.h>
#include<conio.h>
void main()    //start point of execution
{       //body of the program
	clrscr(); //clears the history of the console screen
	int num;  //declare the variable num which stores number
	int factorial= 1;   //factorial 1

	cout<<"Enter Number to find its Factorial:" <<endl;
	cin>>num;          //user can define which number to find factorial
	for(int a=1;a<=num;a++)   //if i enter number 1 means condition is true
	//because a <= num it will be true always
	{
		factorial=factorial*a;
		}
	cout<<"Factorial of Given Number is ="<<factorial<<endl;
	getch(); //holds console screen
}