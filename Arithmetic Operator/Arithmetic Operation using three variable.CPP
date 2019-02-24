//Program to perform arithmetic operator using three variable
//Header File
#include<iostream.h>
#include<conio.h>
// Start point of program
void main()
{ // Curly brackets body of program
    clrscr(); // clears the history of console screen
	int a = 10, b = 2, c;   // through common data type we declare variables on same line.
	c=a+b;   //Add operation perform
	cout<<"Addition of two numbers "<<c<<endl;
	c=a-b;   //Subtract operation perform
	cout<<"Subtraction of two numbers "<<c<<endl;
	c=a/b;   //Divide operation perform
	cout<<"Division of two numbers "<<c<<endl;
	c=a%b;   //Remainder operation perform
	cout<<"Modulus of two numbers "<<c<<endl;

	getch();

}
