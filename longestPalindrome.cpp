#include<iostream>
using namespace std;

string longestPalindrome(string myString, int i, int j);

int main () {
    string myString = "dragongohangasalamiimalasagnahogasdf";
    int size = myString.length();
    int i = 0;

    string p = longestPalindrome(myString, i, size-1);

    cout << "longest Palindrome: "<< p<<endl;
    system("pause");

}

string longestPalindrome (string myString, int i, int j){
     
     int size = j;

     if (j-i<1){
                 cout<<myString.substr(i,j-i+1)<<endl;
     return myString.substr(i,j-i+1);}
     

     else if (myString[i]==myString[j]) {
          for (int k =i, v = j; k<v;k++,v--){
              if(myString[k]!=myString[v])
              break;
              }
              return myString.substr(i,j-i+1);
              }          
    else { 
    string s=myString;
    string myString1 = longestPalindrome(s, i+1,j);
    string myString2 = longestPalindrome(s, i, j-1);
    
    if (myString1.length()>=myString2.length())
             return myString1 ;
    else return myString2;
}
}
