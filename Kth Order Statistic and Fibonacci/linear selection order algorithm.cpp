#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

void readFile(vector<int> &input);
void readFile (vector<int> &input) {
    
    int j;
    ifstream myFile("input.txt");
    while (!myFile.eof()) {
        myFile >> j;
        input.push_back(j);
    }
}  


int partition(vector<int> &input, int p, int r)
{
    int pivot = input[r];
    
    while ( p < r )
    {
        while ( input[p] < pivot )
            p++;
        
        while ( input[r] > pivot )
            r--;
        
        if ( input[p] == input[r] )
            p++;
        else if ( p < r ) {
            int tmp = input[p];
            input[p] = input[r];
            input[r] = tmp;
        }
    }
    
    return r;
}

int quick_select(vector<int> &input, int p, int r, int k)
{
    if ( p == r ) return input[p];
    int j = partition(input, p, r);
    int length = j - p + 1;
    if ( length == k ) return input[j];
    else if ( k < length ) return quick_select(input, p, j - 1, k);
    else  return quick_select(input, j + 1, r, k - length);
}

int main()
{
    int k = 5;
    vector<int> input;
    readFile(input);
    
    cout<< quick_select(input, 0, input.size()-1, input.size()-k);
    system("pause");
}
