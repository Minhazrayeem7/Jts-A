#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    string m,n;
    getline(cin,m);
    getline(cin,n);
    int p=m.size();
    int q=n.size();
    for(int i=0;i<p;i++)
    {
        if(m[i]>=97 && m[i]<=122)
        {
            m[i]=m[i]-32;
        }
        if(n[i]>=97 && n[i]<=122)
        {
            n[i]=n[i]-32;
        }
    }
    for(int j=0;j<p;j++)
    {
        if(m[j]>n[j])
        {
            flag=1;
            break;
        }
        else if(m[j]<n[j])
        {
            flag=2;
            break;
        }
    }
    if(flag==1)
    {
        cout<<1<<endl;
    }
    else if(flag==2)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }



}
