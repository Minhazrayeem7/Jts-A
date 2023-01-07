#include<bits/stdc++.h>
using namespace std;
int main()
{
    int up=0,low=0;
    string s;
    getline(cin,s);
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            up=up+1;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            low=low+1;
        }
    }
    if(up>low)
    {
        for(int i=0;i<l;i++)
        {
        if(s[i]>='a' && s[i]<='z'){
        s[i]=s[i]-32;
        }
        cout<<s[i];
        }
    }
    else if(low>=up)
    {
        for(int i=0;i<l;i++)
        {
        if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
        }
        cout<<s[i];
        }
    }

}
