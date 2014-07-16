#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long a, b;
        cin >> a >> b;
        int ans = 0;
        if(a==0)
            ans = 0;
        if(a==1)
            ans = 1;
        if(a==2)
        {
            if(b%4==0)
                ans = 6;
            if(b%4==1)
                ans = 2;
            if(b%4==2)
                ans = 4;
            if(b%4==3)
                ans = 8;
            if(b==0)
                ans = 1;
        }
        if(a==3)
        {
            if(b%4==0)
                ans = 1;
            if(b%4==1)
                ans = 3;
            if(b%4==2)
                ans = 9;
            if(b%4==3)
                ans = 7;
        }
        if(a==4)
        {
            if((b-1)%2==0)
                ans = 6;
            if((b-1)%2==1)
                ans = 4;
            if(b==0)
                ans = 1;
        }
    }
    return 0;
}