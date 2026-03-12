#include<iostream>      //Rafimia69     15/5/2025
using namespace std;
int main()
{
    int distance,steps=0,count=0;
    cin>>distance;
    cout<<endl;
    while(count+5<=distance)
    {
        count=count+5;
        steps++;
    }
    while(count+4<=distance)
    {
        count=count+4;
        steps++;
    }
    while(count+3<=distance)
    {
        count=count+3;
        steps++;
    }
    while(count+2<=distance)
    {
        count=count+2;
        steps++;
    }
    while(count+2<=distance)
    {
        count=count+2;
        steps++;
    }
    while(count+1<=distance)
    {
        count=count+1;
        steps++;
    }
    cout<<steps;
}