#include <iostream>
#include <vector>

using namespace std;


int main()
{
for (int i = 0, j = 1; i<10; i++) {
    cout<<j<<" ";
    j++;
}
cout <<endl;
for (int i = 0, j = 10; i<10; i++) {
    cout<<j<<" ";
    j--;
}
cout <<endl;
for (int i = 0, j = 0; i<=10; i++) {
    cout<<j<<" ";
    j+=2;
}
cout<<endl;
for (int i = 0, j = 0; i<=10; i++) {
    for (j = 0; j<i; j++)
    cout <<"*";
    cout<<endl;
}
    
cin.get();
}

