
#include <iostream>
#include <string>
using namespace std;

void swap(char* first, char* second)
{
        char ch = *second;
        *second = *first;
        *first = ch;
}

int permute(char* set, int begin, int end)
{                    
                 
        int i;
        int range = end - begin;
        if (range == 1) {
                cout << *set << endl;
                 cout << set << endl;
        } else {
                for(i=0; i<range; i++) {
                        swap(&set[begin], &set[begin+i]);		//initial swap
                        permute(set, begin+1, end);				//recursion
                        swap(&set[begin], &set[begin+i]);       //swap back
                }
        }s
        return 0;
}

//Example Implementation -- Up to you on how to use
int main()
{
    
float i = clock();
        char str[255]; //string 
	cout << "Please enter a string: ";
	cin.getline(str, 255); //take string
        permute(str, 0, strlen(str)); //permutate the string
        
float j = clock();
float diff = j-i;
float seconds = diff / CLOCKS_PER_SEC;
cout << seconds;
        system("Pause");
        return 0;

}
