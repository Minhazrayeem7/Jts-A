#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int y=0;
    while(1)
    {
        if(a>b)
        {
            break;
        }
        else
        {
            y++;
            a=a*3;
            b=b*2;

        }

    }
    cout<<y;

return 0;
}


