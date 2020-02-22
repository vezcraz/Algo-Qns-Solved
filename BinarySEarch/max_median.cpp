#include<bits/stdc++.h>
using namespace std;
#define sep " "
#define int long long

bool p(int mid, vector<int> v, int k)
{
	int n = v.size();
	for(int i=n/2;i<n;i++)
	{
		if(mid-v[i]>0)
		k-=mid-v[i];
	}
	return k>=0?true:false;
}

int32_t main()
{
	int n, k;
	cin>>n>>k;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int hi = v[n-1]+k;
	int lo = 0;
	int mid;
	int l = 33;

	if(p(hi, v, k))
	{
		cout<<hi;
		return 0;
	}

	while(1)
	{
		mid = lo + (hi-lo)/2;
		// cerr<<mid<<sep<<hi<<sep<<lo<<endl;
		if(hi<=lo)
			break;
		if(p(mid, v, k) and !p(mid+1, v, k))
			break;
		if(p(mid, v, k))
			lo= mid;
		else
			hi = mid;
	}
	cout<<mid;
}
