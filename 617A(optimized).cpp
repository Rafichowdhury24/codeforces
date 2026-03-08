#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    if(n%5==0)
    {ans=n/5;} cout<<ans;
    else
    {ans=n/5+1;} cout<<ans;
}