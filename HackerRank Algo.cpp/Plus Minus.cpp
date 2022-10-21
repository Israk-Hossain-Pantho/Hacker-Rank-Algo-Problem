#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n],count1=0,count2=0,count3=0;
    double sum1,sum2,sum3;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
            count1++;
        else if(arr[i]==0)
            count2++;
        else
            count3++;
    }

    sum1 = float(count1)/n;
    sum2 = float(count2)/n;
    sum3 = float(count3)/n;

    cout<<setprecision(6)<<fixed;
    cout<<sum3<<endl<<sum1<<endl<<sum2<<endl;
}
