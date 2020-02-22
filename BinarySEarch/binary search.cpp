#include<iostream>
#include<bits/stdc++.h>

using namespace std;


bool p(int mid, int a, int b, int c)
{

    if(a + mid > b + c - mid)
        return true;
    else
        return false;
}

int main()
{
    long t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;


        if(a + c <= b)
        {
            cout << 0 << endl;
            continue;
        }

        if(a > b + c)
        {
            cout << c + 1 << endl;
            continue;
        }
        int hi = c;
        int lo = 0;
        int mid;
        while(1)
        {
            mid = (hi - lo) / 2 + lo;
            // cout<<mid<<endl;

            if(!p(mid, a, b, c) and p(mid + 1, a, b, c))
                break;
            else if(p(mid, a, b, c))
                hi = mid;
            else
                lo = mid;


        }

        cout << (c - mid) << endl;



    }

    return 0;
}