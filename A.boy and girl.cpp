#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string s;
    getline(cin,s);
    int l=s.size();
    count=l;
    sort(s.begin(),s.end());
    for(int i=0;i<l;i++)
    {

        if(s[i]==s[i+1])
        {
            count=count-1;
        }

    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }



}
