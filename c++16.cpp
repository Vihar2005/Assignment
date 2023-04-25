#include <iostream>
#include <cstring>

using namespace std;

class String 
{
    private:
        char *data;
        int length;
    
    public:
        String() 
		{
            length = 0;
            data = new char[length+1];
            data[0] = '\0';
        }
    
        String(const char *str) 
		{
            length = strlen(str);
            data = new char[length+1];
            strcpy(data, str);
        }
    
        String(const String &str) 
		{
            length = str.length;
            data = new char[length+1];
            strcpy(data, str.data);
        }
    
        ~String() 
		{
            delete[] data;
        }
    
        String operator+(const String &str) 
		{
            String result;
            result.length = length + str.length;
            result.data = new char[result.length+1];
            strcpy(result.data, data);
            strcat(result.data, str.data);
            return result;
        }
    
        friend ostream& operator<<(ostream &out, const String &str);
};

ostream& operator<<(ostream &out, const String &str) 
{
    out << str.data;
    return out;
}

int main() 
{
    String str1("Hello"), str2(" world!");
    String str3 = str1 + str2;
    
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    cout << "String 3: " << str3 << endl;
    
}

