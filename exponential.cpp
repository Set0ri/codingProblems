#include <iostream>

using namespace std;

int exponential (int x, int y);

int main() {
    
    int y = 3;
    int x = 4;
    
    cin >> x;
    cin>>y;
    
    cout << exponential(x,y);
    system("pause");
    
}

int exponential (int x, int y) {
    
    if (y==0)
       return 1;
    else if (y ==1)
         return x;
    else if (y%2 == 0){
         return exponential(x*x,y/2);}
    else if (y%2==1)
        return x*exponential(x*x,y/2);
        return 0;
}
