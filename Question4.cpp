// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;
    // if(s.length()!=t.length()) cout<<"False";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

}