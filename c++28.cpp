#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() 
{
    string data;
    cout << "Enter data to write to file: ";
    getline(cin, data);

    ofstream fout("myfile.txt");
    if (fout.is_open()) 
	{
        fout << data << endl;
        cout << "Data written to file." << endl;
        fout.close();
    }
    else 
	{
        cout << "Unable to open file for writing." << endl;
    }

    ifstream fin("myfile.txt");
    if (fin.is_open()) 
	{
        string line;
        while (getline(fin, line)) 
		{
            cout << "Data read from file: " << line << endl;
        }
        fin.close();
    }
    else 
	{
        cout << "Unable to open file for reading." << endl;
    }
}

