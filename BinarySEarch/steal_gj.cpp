#include<bits/stdc++.h>
using namespace std;
#define int long long
#define sep " "
int find_ways(int mid, int m)
{
	int ways = 0;
	int a = cbrt(mid);
	// cout<<endl<<a<<endl;
	for(int i=2; i<=a; i++)
	{
		ways+=mid/(i*i*i);
	}
	// cout<<ways;
	return ways;
}
bool p(int mid, int m)
{
	return find_ways(mid, m)>=m;
}

int32_t main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		int hi= 5e15;
		int lo = 0;
		int mid;

		while(lo<hi)
		{
			mid = lo + (hi-lo)/2;

			// cerr<<lo<<sep<<mid<<sep<<hi<<endl;
			if(p(mid, m) and !p(mid-1, m))
				break;
			if(p(mid, m))
				hi=mid;
			else
				lo=mid;
			// break;
		}
		if(find_ways(mid, m)==m)
			cout<<mid<<endl;
		else 
			cout<<-1<<endl;

	}


}