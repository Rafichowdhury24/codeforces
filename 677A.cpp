#include<iostream>      //Rafimai69     31/7/2025
using namespace std;
int main()
{
    int n,h,tall=0,normal=0;

    cin>> n >>h;
    int p[1000];
    for(int i=0;i<n;i++)
    {
        cin>> p[i];
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]>h)
        {
            tall++;
        }
        else
            normal++;
    }
    cout<< normal+(tall*2);
}
