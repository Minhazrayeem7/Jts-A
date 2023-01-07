#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0,end=n-1,r1=0,r2=0,max=0,count=0;
    while(start<=end)
    {
        if(arr[start]>=arr[end])
        {
            max=arr[start];
            start++;
        }
        else
        {
        max=arr[end];
        end--;
        }
        if(count%2==0)
        {
            r1+=max;
        }
        else
        {
            r2+=max;
        }
        count++;

    }
    cout<<r1<<" "<<r2<<endl;
}
