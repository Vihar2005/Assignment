#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() 
{
    ifstream fin("myfile.txt");
    if (fin.is_open()) 
	{
        string line;
        while (getline(fin, line)) 
		{
            cout << line << endl;
        }
        fin.close();
    }
    else 
	{
        cout << "Unable to open file." << endl;
    }
}

