#include<iostream>
using namespace std;
int amin()
{
    char n[100];
    int i,l=0,b=0,lwb;
    cout<<"enter any string";
    cin>>n[i];
    for(i=0;n[i]!='\0';i++)
    {
        l++;
        if(n[i]==' ')
            b++;
    }
    lwb=l-b;
    cout<<lwb;
    return 0;
}