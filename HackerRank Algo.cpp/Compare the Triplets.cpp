#include<iostream>

using namespace std;

int main()
{
    int a[3], b[3],count1=0,count2=0;
    for(int i=0; i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<3;i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<3;i++)
    {
        if(a[i]>b[i])
        {
            count1++;
        }
        else if(a[i]<b[i])
        {
            count2++;
        }
    }

    cout<<count1<<count2;
}
