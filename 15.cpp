#include <iostream>
using namespace std;
class Matrix 
{
    private:
        int size;
        int *data;
    
    public:
        Matrix(int size) 
		{
            this->size = size;
            data = new int[size];
        }
    
        Matrix(const Matrix &matrix) 
		{
            this->size = matrix.size;
            data = new int[size];
            for (int i = 0; i < size; i++) 
			{
                data[i] = matrix.data[i];
            }
        }
    
        ~Matrix() 
		{
            delete[] data;
        }
    
        Matrix operator+(const Matrix &matrix) 
		{
            Matrix result(size);
            for (int i = 0; i < size; i++) 
			{
                result.data[i] = data[i] + matrix.data[i];
            }
            return result;
        }
    
        void setElement(int index, int value) 
		{
            data[index] = value;
        }
    
        int getElement(int index) 
		{
            return data[index];
        }
};

int main() 
{
    Matrix matrix1(5), matrix2(5);
    Matrix matrix3 = matrix1 + matrix2;
    
    for (int i = 0; i < 5; i++) 
	{
        matrix1.setElement(i, i+1);
        matrix2.setElement(i, i+5);
    }
    
    cout << "Matrix 1:" << endl;
    for (int i = 0; i < 5; i++) 
	{
        cout << matrix1.getElement(i) << " ";
    }
    cout << endl;
    
    cout << "Matrix 2:" << endl;
    for (int i = 0; i < 5; i++) 
	{
        cout << matrix2.getElement(i) << " ";
    }
    cout << endl;
    
    cout << "Matrix 3:" << endl;
    for (int i = 0; i < 5; i++) 
	{
        cout << matrix3.getElement(i) << " ";
    }
    cout << endl;
    
}

