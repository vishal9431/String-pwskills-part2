// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with
#include<iostream>
using namespace std;
int main()
{
    string str ;
    getline(cin,str);
    string word ="";
    string mx ="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            mx = max(mx,word);
            word ="";
        }
        else
        {
            word+=str[i];
        }
    }
    mx =max(mx,word);
    cout<<mx<<" ";
}