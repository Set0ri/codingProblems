// you can also use includes for example:
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int equi (vector<int> &A);

int equi (vector<int>& A ) {
   
   int size = A.size();
  
   if (size==0) return -1;
       int sum;
       int i;
       
   
   for (i=0;i<size;i++){
       sum += A[i];       
       }
   cout << sum;
   int left_sum = 0;
   
   for (i=0;i<=size;i++) {
       
       int right_sum = sum - left_sum - A[i];
       cout << "left sum: "<< left_sum<< ", right sum: "<< right_sum<<endl;
   
   if (left_sum == right_sum)
       return i;
   left_sum+= A[i];
   
   }
   return -1;
}

int main(){
 
 static const int arr[] = {2,4,6,2,7,5};
 vector<int> A (arr, arr + sizeof(arr)/sizeof(arr[0]));


 
 
 for (int i = 0; i<A.size();i++)
 cout << i<< ":"<< A[i]<< ", ";
 
 
 int p = equi(A);
 
 cout <<endl << p;
 
 system("pause");
   
}
