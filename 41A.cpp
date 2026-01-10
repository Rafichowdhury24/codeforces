#include<iostream>      //Rafimia69     30/7/2025
using namespace std;
int main()
{
    string s , t;
    cin>>s>>t;
    int n=s.size();

    if(n!=t.size())
    {
        cout<<"NO";
        return 0;
    }

    int co=0, j=n-1;
    for(int i=0;i<n;i++)
    {

        if(s[i]==t[j])
        {
            co++;
        }
        j--;


    }
    if(co==n)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}
