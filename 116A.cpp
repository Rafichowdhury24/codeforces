#include<iostream>      //Rafimia69     31/7/2025
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000],b[1000];

    for(int i=0;i<n;i++)
    {
        cin>> a[i]>>b[i];
    }
    int t=0,m=0;
    for(int i=0;i<n;i++)
    {
      t=t-a[i]+b[i];
      if(t>m)
      {
          m=t;
      }


    }
    cout<<m<<endl;

}
