#include<iostream>      //Rafimia69     30/7/2025
using namespace std;
int main()
{
    int n,a=0,d=0;
    string s;
    cin >>n >>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else
            d++;
    }
    if(a>d)
        cout<<"Anton";
    else if(a<d)
        cout<<"Danik";
    else
        cout<<"Friendship";
}
