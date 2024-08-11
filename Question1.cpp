// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"
#include<iostream>
using namespace std;
int main()
{
    string s ;
    cin>>s;
    int i=0;
    string t=s;
    int j=s.length()-1;
    while(j>i)
    {
        swap(t[i],t[j]);
        i++;
        j--;
    }
    s=s+t;
    cout<<s<<" ";
}