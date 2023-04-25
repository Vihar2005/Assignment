#include <iostream>

using namespace std;

template <typename T>
void sortArray(T arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = i + 1; j < size; j++) 
		{
            if (arr[i] > arr[j]) 
			{
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() 
{
    int intArray[] = {5, 1, 7, 3, 9};
    int intSize = sizeof(intArray) / sizeof(int);
    sortArray(intArray, intSize);
    cout << "Sorted integer array: ";
    for (int i = 0; i < intSize; i++) 
	{
        cout << intArray[i] << " ";
    }
    cout << endl;

    double doubleArray[] = {2.5, 1.2, 4.8, 3.6, 0.9};
    int doubleSize = sizeof(doubleArray) / sizeof(double);
    sortArray(doubleArray, doubleSize);
    cout << "Sorted double array: ";
    for (int i = 0; i < doubleSize; i++) 
	{
        cout << doubleArray[i] << " ";
    }
    cout << endl;
}

