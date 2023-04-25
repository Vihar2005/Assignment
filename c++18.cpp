#include <iostream>
using namespace std;
class Cricketer 
{
protected:
    string name;
    int age;
public:
    void inputCricketerData(string n, int a) 
	{
        name = n;
        age = a;
    }
};

class Batsman : public Cricketer 
{
private:
    int totalRuns;
    float avgRuns;
    int bestPerformance;
public:
    void inputBatsmanData(int tr, int bp) 
	{
        totalRuns = tr;
        bestPerformance = bp;
        avgRuns = (float)totalRuns / 10;
    }
    void displayBatsmanData() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << avgRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() 
{
    Batsman b;
    b.inputCricketerData("Virat Kohli", 33);
    b.inputBatsmanData(12169, 254);
    b.displayBatsmanData();

}

