#include<iostream>      //Rafimia69     2/5/2024
using namespace std;
int main()
{
    int n,k,i,co=0;
    cin>>n>>k;
    int p[50];


        for(i=0;i<n;i++)
        {
            cin>> p[i];
        }
        for(i=0;i<n;i++)
        {
            if(p[i]>=p[k-1]&&p[i]>0)
            {
                co++;
            }
        }

    cout<< co;
}
