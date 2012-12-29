// ReverseString.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

int ReverseString(char* rev);

int main()
{
	char str[255]; //string 
	cout << "Please enter a string: ";
	cin.getline(str, 255); //take string

	ReverseString(str);
	    system("pause");
}


int ReverseString(char* rev)
{
	if(*rev!='\0')
	{
		ReverseString(rev+1);
		putchar(*rev);
	}

	return 1;
}
