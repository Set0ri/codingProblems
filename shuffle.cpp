#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <map>

using namespace std;

map<int,int> shuffle();
int* fisherYatesShuffle();

int A[52];


int main(){
    srand(time(0));
    map<int,int> deck;
  
    
    deck = shuffle();
    
  
    for (int i = 0; i<52; i++){
    cout <<i<<": "<<deck[A[i]]<<endl;
    }
    
    int* deck2 = fisherYatesShuffle();
    
    

system("pause");
}

map<int,int> shuffle(){
     
     map<int,int> deck;
     
     for (int i = 0, j = 1; i<52; i ++,j++){
         A[i]=rand();
         deck[A[i]]=j;
     }
     
     sort(A,A+52);
     return deck;

}

int* fisherYatesShuffle()
{
     int* myPtr;                    
     int deck[52];
     myPtr = deck;
     
     for (int i = 0, j = 1; i<52; i ++,j++)
     deck[i]=j;
    
    for(int n=51; n>1; n--)
    {
        int y=rand() % (n);
        swap(deck[y], deck[n]);
    }
    
    for (int i = 0; i<52; i++){
    cout <<i<<": "<<myPtr[i]<<endl;
    }
    return myPtr;
}
