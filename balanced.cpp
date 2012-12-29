#include <iostream>
#include <stack>

using namespace std;

string balanced(string myString);
string balanced2( string myString);

int main () {
    
    string myString;
    string unbalancedString = ")(";
    
    cout<<"please input a string: "<<endl;
    cin >> myString;
    
    string result = balanced2(myString);
    cout << result;
    system("pause");
}


string balanced2( string myString) {
       
       int cnt = 0;
       
       for (int i = 0; i<myString.length(); i++){
           if  (myString[i]=='(')
           cnt++;
           
           else if (myString[i]==')')
           cnt--;
           
           if (cnt<0)
           return "unbalanced";
           }
           if (cnt==0) 
           return "balanced";
           else return "unbalanced";
}

string balanced (string myString) {
     
     stack<char> myStack;
     
     for (int i = 0; i<myString.length();i++){
         
         if (myString[i]=='(')
         myStack.push('(');
         
         else if(myString[i]==')'){
              
              if (myStack.empty()){
              return "unbalanced";
              }
              
              else myStack.pop();
         }
         
         if (i==myString.length()-1 && myStack.empty())
        return"balanced";
         else return"unbalanced";
     }
}
