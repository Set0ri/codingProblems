#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void LCSUtil(int A[], int i, int B[], int j, stack<int> &s);
stack<int> LCS(int A[],int B[]);

stack<int> LCS(int A[], int B[]){
           
           int n = sizeof(A)/sizeof(int);
           int m = sizeof(B)/sizeof(int);
           stack<int> myStack;
           LCSUtil(A,n,B,m, myStack);
           return myStack;
           
}

void LCSUtil(int A[], int i, int B[], int j, stack<int> &s){
     
     if (i == 0 || j == 0)
     {
        break;
     }
     else if (A[i]==B[i])
     {
          s.push(A[i]);
          LCS(A,i-1,B,j-1, s);
     }
     else
     {
               
               
     }

int main() {
    int A[] = {0,1,2,3,4,6,7};
    int B[] = {0,0,2,2,4,4,7};
    
    stack<int> lcs = LCS(A,B);
    
    while (!lcs.empty()){
          cout << lcs.top() <<", ";
          lcs.pop();
          }
          cin.get();
}
     
