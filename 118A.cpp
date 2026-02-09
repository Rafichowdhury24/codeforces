#include<bits/stdc++.h>     //Rafimia69     12/5/2025
using namespace std;
int main()
{
    string s;
    cin>>s;

    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for(int i=0;i<s.size();i++)
    {

        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
          continue;
        }
        cout<<"."<<s[i];
    }
}
