// range heap example
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
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
int main () {
  vector<int> input;
    readFile(input);
    make_heap(input.begin(),input.end()-1);
  
  vector<int> v;
  readFile(v);
  v.pop_back();


  make_heap (v.begin(),v.end());
  cout << "initial max heap   : " << v.front() << endl;

  pop_heap (v.begin(),v.end()); v.pop_back();
  cout << "max heap after pop : " << v.front() << endl;

  v.push_back(99); push_heap (v.begin(),v.end());
  cout << "max heap after push: " << v.front() << endl;

  cout<<v.front()<< " ";
  pop_heap(v.begin(),v.end());
  cout<<v.front()<< " ";
  pop_heap(v.begin(),v.size());
  cout<<v.front()<< " ";
  

  sort_heap (v.begin(),v.end());
  

  cout << "final sorted range :";
  for (unsigned i=0; i<v.size(); i++) cout << " " << v[i];

  cout << endl;
    system("pause");
  return 0;
}
