#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    while(n--)
    {
        int x,y,z,sum=0;
        cin>>x>>y>>z;
        sum=x+y+z;

        if(sum>1)
        {
            t=t+1;
        }
        sum=0;
    }
    cout<<t<<endl;
}
