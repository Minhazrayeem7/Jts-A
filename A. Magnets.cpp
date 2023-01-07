#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,count=0;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<x;i++)
     {
        if(arr[i]!=arr[i+1])
        {
            count=count+1;
        }
     }


    cout<<count<<endl;
}
