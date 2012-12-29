#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    int num;
    ofstream outFile;
    outFile.open("input.txt", fstream::trunc);
    
    for (int i = 0; i < 10000; i++) {
        num = rand()%10000;   
        outFile<<num<<" "; 
    }
}
