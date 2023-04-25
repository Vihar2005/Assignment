#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() 
{
    string data;
    cout << "Enter data to add to file: ";
    getline(cin, data);
    ofstream fout("myfile.txt", ios::app);
    if (fout.is_open()) 
	{
        fout << data << endl;
        fout.close();
        cout << "Data added to file." << endl;
    }
    else 
	{
        cout << "Unable to open file." << endl;
    }
}

