#include <iostream>

using namespace std;

int main () {
    char* pointer1, num, *reference;
    char str[255];
    cin.getline(str, 255);
    char *paradox ="yo";
    char whatup;
    char *set = str;
    cout<<"*set: "<<*set<<endl;
    cout<<"set: "<<set<<endl;
    
    paradox = &whatup;
    cout<<"paradox: "<<paradox<<endl;
    cout<<"*paradox: "<<*paradox<<endl;
    system("pause");
    
}
