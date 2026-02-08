#include<bits/stdc++.h>     //Rafimia69     3/5/2025
using namespace std;
int main()
{
    string s1, s2,x1,x2;
    cin>> s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
         x1=toupper(s1[i]);
         x2=toupper(s2[i]);


        if(x1==x2)
        {
            continue;
        }
        else if (x1>x2)
        {
            cout<<1<<endl;
            break;
        }
        else
        {
            cout<<-1<<endl;
            break;
        }

    }
        if(x1==x2){cout<<0<<endl;}

}
