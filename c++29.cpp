#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Person 
{
public:
    string name;
    int age;
    void writeToFile(ofstream& fout) 
	{
        fout << name << " " << age << endl;
    }
    void readFromFile(ifstream& fin) 
	{
        fin >> name >> age;
    }
};

int main() 
{
    Person p;
    cout << "Enter name: ";
    getline(cin, p.name);
    cout << "Enter age: ";
    cin >> p.age;


    ofstream fout("myfile.txt");
    if (fout.is_open()) 
	{
        p.writeToFile(fout);
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
        p.readFromFile(fin);
        cout << "Data read from file: " << p.name << " " << p.age << endl;
        fin.close();
    }
    else 
	{
        cout << "Unable to open file for reading." << endl;
    }
}

