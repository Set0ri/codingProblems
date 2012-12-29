#include<iostream>

using namespace std;

float squareRoot(float n);
float squareRoot(float n){
      
      float x = n;
      float y = 1;
      float e = 0.00001;
      
      while (x-y>e)
            {
			 		x=(x+y)/2;
			 		y=n/x;
			 		cout<<"y: "<<y<<endl;
			 		cout<<"x: "<<x<<endl;
        }
    return x;
}



int main(){
    int n = 50;
    printf("Square root of %d is %f", n, squareRoot(n));
    getchar();
}


                    
