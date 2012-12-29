#include <stack>
#include <iostream>

using namespace std;
int main(){
    
    stack<int> myStack;
    
    myStack.push(1);
    myStack.push(3);
    int sum = 0;
    while(!myStack.empty()){
                            
                            sum += myStack.top();
    cout<<myStack.top()<<endl;
    
    myStack.pop();}
    cout<<sum<<endl;
    system("pause");
}
