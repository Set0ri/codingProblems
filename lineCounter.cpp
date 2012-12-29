#include <iostream>
#include <fstream>

using namespace std;

int main() { 
    int number_of_lines = 0;
    string line;
    ifstream myfile("textexample.txt");

    while (getline(myfile, line))
        ++number_of_lines;
    cout << "Number of lines in text file: " << number_of_lines;
    system("pause");
    return 0;
}
