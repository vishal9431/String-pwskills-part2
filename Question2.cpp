// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int maxi=INT_MIN;
    int smaxi=INT_MIN;
    for(int i=0;i<s.length();i++)
    {
        int t =s[i]-'0';
       if(t>maxi)
       {
            smaxi = maxi;
            maxi=t;
       }
       else if(smaxi<t && maxi>t)
       {
            smaxi = t;
       }

    }
    cout<<smaxi<<" ";
}