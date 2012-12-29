#include <iostream>

using namespace std;

int main(){
int arr[17] = {1,3,3,4,5,6,7,8,9};
    int a= 0;
    for(int i=0;i<10;i++) {
     a= a^ arr[i] ^i;
    }
    cout<<a;
    system("pause");
    

}
