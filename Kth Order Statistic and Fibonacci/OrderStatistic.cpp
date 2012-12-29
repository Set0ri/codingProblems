#include <iostream>
#include <fstream>
#include <vector>
#include<algorithm>
using namespace std;


void readFile(vector<int> &input);
void readFile (vector<int> &input) {
    
    int j;
    ifstream myFile("input.txt");
    while (!myFile.eof()) {
        myFile >> j;
        input.push_back(j);
    }
    input.pop_back();
}  

void bubbleSort(vector<int> &vec, int k);
void bubbleSort(vector<int> &vec, int k) {

        for(int i = 0; i < vec.size()-k;i++){
		for(int j = i+1; j < vec.size(); j++)
		{
		if(vec[i] > vec[j])
			std::swap(vec[i],vec[j]);
		}
    }	
}

void qsort( vector<int> &array, int leftbound , int rightbound );
void qsort( vector<int> &array, int leftbound , int rightbound )
{
    if ((rightbound - leftbound) >= 2)
    {   
        int pivot = array[leftbound + (rand() % (rightbound - leftbound))];
        int leftposition    = leftbound;
        int rightposition   = rightbound - 1;

        while ( leftposition < rightposition )
        {   
            while ((array[leftposition] <= pivot) && (leftposition < rightposition))
            {   ++leftposition;
            }   
            while ((array[rightposition] > pivot ) && (leftposition < rightposition))
            {   --rightposition;
            }   
            std::swap(array[leftposition], array[rightposition]);
        }
        // At least the pivot point will be on the left hand side.
        // This will also be the largest value. So move the leftposition back
        // to remove all the pivot points.
        while(((leftposition-1) > leftbound) && (array[leftposition-1] == pivot))
        {   --leftposition;
        }
        qsort(array, leftbound, leftposition-1);    // leftposition is one past the end of the left
        qsort(array, rightposition+1, rightbound);  // Thus at the start of the right.
    }   
}

int min(vector<int> &vec);
int min(vector<int> &vec){
    int min = vec[0];
    int location = 0;
    for (int i = 1; i<vec.size(); i++){
        if (vec[i]<min){
        min = vec[i];
        location = i;
        }
    }
    return location;
}

void tempArray (vector<int> &vec, int k);
void tempArray (vector<int> &vec, int k){
    vector<int> temp;
    
    for (int i = 0; i < k; i ++)
    temp.push_back(vec[i]);
    
    for (int i = k; i<vec.size(); i++){
        int location = min(temp);
        if (temp[location]<vec[i])
            swap(temp[location],vec[i]);
    }
    
    //for (int i = 0, j = temp.size()-1; i<k; i ++, j--)
    //cout << temp[j]<< endl;
    
    return;
}

void maxHeap(vector<int> &input, int k);
void maxHeap(vector<int> &input, int k){
    
    make_heap(input.begin(),input.end());
    cout<<input.front()<<endl;
    for (int i = 0; i<k-1; i++){
    pop_heap(input.begin(),input.end()-i);
    //cout<<input.front()<<endl;
    }
}    


int main () {
    int k = 2500;
    vector<int> input;
    readFile(input);
    float t1 = clock();
    //bubbleSort(input,k);
    //qsort(input, 0, input.size()); 
    //tempArray(input, k);   
    //maxHeap(input, k);
    float t2 = clock();
    float diff = (t2-t1)/CLOCKS_PER_SEC;
    cout << diff << " sec" << endl;
    
    //for (int i = 0, j = input.size()-1; i<k; i ++, j--)
    //cout << input[j]<< endl;

    
    system("pause");
}
