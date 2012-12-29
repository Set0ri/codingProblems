#include <iostream>
#include <string>
#include <map>

using namespace std;

void sumPair(int A[], int size, int x);

void sumPair(int A[], int size, int x){
      
      map<int, bool> myMap;
     
     myMap;
     
     for (int i=0; i < size; i ++) 
     {
         int temp = x - A[i];
         if (myMap[temp]== 1)
         {
            cout << A[i]<<" + "<<temp<<"= "<<x<<endl;
         }
         myMap[A[i]]=1;
     }
}
         

int main()
{
    
    
    int A[]={0,1,3,4,5,7,7,4,9,10,-1};
    int size = sizeof(A)/sizeof(0);
    
    int sum = 4;
    
    sumPair(A,size,sum);
    system("pause");
   
}
