#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n][n],sum1=0,sum2=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int k=0,j=n-1;
    for(int i=0; i<n; i++)
    {
            sum1 += arr[k][k];
            k++;
    }

    for(int i=0; i<n; i++)
    {
        sum2 += arr[k][j];
        k++;
        j--;
    }

    cout<<abs(abs(sum1)-abs(sum2));
}

