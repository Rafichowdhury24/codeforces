#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int co=0;
    sort(s.begin(),s.end());
    for(int i=0;i<l-1;i++)
    {
        if(s[i]!=s[i+1])
        co++;
    }

    if(co%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;}
    else
        cout<<"IGNORE HIM!"<<endl;

}
