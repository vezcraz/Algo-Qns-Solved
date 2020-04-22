#include <bits/stdc++.h>
using namespace std;

# define int long long
typedef unsigned long long ul ;
typedef long long ll ;
typedef string str ;
typedef pair <int, int >  pii ;
typedef pair <ll, ll>  pll ;
typedef vector <int> vi ;
typedef vector <bool> vb ;
typedef vector <ll> vll ;
typedef vector <pii> vpi ;
typedef vector <pll> vpl ;
#define umap unordered_map

#define MOD 1000000007
#define vec vector
#define nl '\n' << flush
#define is ==
#define all(v) (v).begin() , (v).end()
#define revall(v) (v).rbegin() , (v).rend()
#define sumof(v) accumulate(all(v), 0LL, plus<ll>())
#define maxof(v) max_element(all(v))
#define minof(v) min_element(all(v))
#define rev(v) reverse(all(v))
#define sz(v)  (long long)(v).size()
#define lp(i, n) for ( ll i = 0 ; i < (n) ; i++ )
#define lpd(i, n) for ( ll i = (n)-1 ; i >= 0 ; i-- )
#define lpc(it, c) for ( auto it = (c).begin(); it != (c).end(); it++)
#define lpv(val, c) for ( auto val : c )
#define lpr(i, l, r) for ( ll i = (l) ; i < (r) ; i++ )
#define lpdr(i, l, r) for ( ll i = (r)-1 ; i >= (l) ; i-- )

#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define inf INT_MAX
#define eps 1e-6
#define PI acos(-1)

#define tc(t) ul testcases ; cin >> testcases ; for(int testcase = 1 ; testcase <= testcases ; testcase++)
#define prntc cout << "Case #" << testcase << ": ";
#define prc(c) for (auto it = (c).begin(); it != --((c).end()); it++) cout << *it << " "; cout << *(c.rbegin()) << "\n" << flush;
#define prv(v) cout << v << "\n" << flush;
#define invec(vec_name, vec_size) vll vec_name(vec_size); lp(i,vec_size) cin >> vec_name[i];
#define fast ios::sync_with_stdio(false); cin.tie(0);

#ifndef ONLINE_JUDGE
#define show ; cerr <<
#define sp ; cerr << "\n";
#define debug(ds_name) for ( auto val : ds_name ) cerr<<val<<"\n" ; cerr<<"\n";
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__);
string sep = "-----------------------------\n";
#else
#define show ; {}
#define sp ; {} ;
#define debug(ds_name) {} ;
#define pr(...) {} ;
string sep = "" ;
#endif
template <class T> ostream &operator <<(ostream &os, const vector<T> &p) {os << "[ "; for (auto &it : p) os << it << " "; return os << "]"; } template <class T> ostream &operator <<(ostream &os, const unordered_set<T> &p) {os << "[ "; for (auto &it : p) os << it << " "; return os << "]"; } template <class T> ostream &operator <<(ostream &os, const set<T> &p) {os << "[ "; for (auto &it : p) os << it << " "; return os << "]"; } template <class T> ostream &operator <<(ostream &os, const multiset<T> &p) {os << "[ "; for (auto &it : p) os << it << " "; return os << "]"; } template <class S, class T> ostream &operator <<(ostream &os, const pair<S, T> &p) {return os << "(" << p.first << ", " << p.second << ")"; } template <class S, class T> ostream &operator <<(ostream &os, const unordered_map<S, T> &p) {os << "[ "; for (auto &it : p) os << it << " "; return os << "]"; } template <class S, class T> ostream &operator <<(ostream &os, const map<S, T> &p) {os << "[ "; for (auto &it : p) os << it << " "; return os << "]"; } template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n"; } template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ", "; dbs(str.substr(idx + 1), s...); } template <class T> T mx(T t) {return t; } template <class T, class... S> T mx(T t, S... s) {T tt = mx(s...); return (t) > (tt) ? (t) : (tt); } template <class T> T mn(T t) {return t; } template <class T, class... S> T mn(T t, S... s) {T tt = mn(s...); return (t) < (tt) ? (t) : (tt); } template <class T, class Op> T acc(Op op, T t) {return t; } template <class T, class Op, class... S> T acc(Op op, T t, S... s) {return op(t, acc(op, s...)); } template <class D1, class D2> auto lambdamax() {return [](D1 a, D2 b) {return (a) > (b) ? (a) : (b) ; } ; } template <class D1, class D2> auto lambdamin() {return [](D1 a, D2 b) {return (a) < (b) ? (a) : (b) ; } ; } ll modExp(ll x, ll y, ll mod) {x %= mod, y %= (mod - 1) ; ll res = 1; while (y) {if (y & 1) res = (res * x) % mod; y /= 2, x = (x * x) % mod; } return res % mod; }
void pint(int a)
{
	cout<<a<<" ";
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE 
        freopen("../input.txt", "r", stdin); 
        freopen("../output.txt", "w", stderr); 
        freopen("../output.txt", "a", stdout); 
    #endif 
        tc(t)
        {

		    int n;
		    cin>>n;
		    invec(v,n);
		    int color=1;
		    vi ans;
		    ans.pb(1);
		    int index=-1;
		    bool k=0;
		    bool flag=0;
		 	set<int> x=set<int>(all(v));
		 	if(sz(x)==1)
		 	{
		    		cout<<1<<endl;
		    		for(int i=0; i<n; i++)
		    			pint(1);
		    		cout<<endl;
		    		goto end;
		    }
		    if(n%2==0)
		    {
		    	cout<<2<<endl;
		    	for(int i=0; i<n; i++)
		    	{
		    		if(i%2==0)
		    			pint(1);
		    		else
		    			pint(2);
		    	}
		    	cout<<endl;
		    	goto end;
		    }
		    if(n%2==1)
		    {
		    	int k=-1;
		    	for(int i=1; i<n; i++)
		    	{
		    		if(v[i-1]==v[i])
		    		{
		    			k=i-1;
		    			goto adjacent;
		    		}

		    	}
		    	if(k==-1 and v[0]==v[n-1]){
		    		k=n-1;
		    		goto adjacent;
		    	}
		    	
		    	noadj:
		    		cout<<3<<endl;
		    		for(int i=0; i<n-1; i++)
		    		{	
		    			if(i%2==0)
		    				pint(1);
		    			else
		    				pint(2);
		    		}
		    		pint(3);
		    		cout<<endl;
		    		goto end;
		    	adjacent:
		    		pr(k);
		    		// pr("lol");
		    		int start=1;
		    		cout<<2<<endl;
			    	vi ans;
			    	ans.pb(1);
			    	if(k==0){
			    		start=2;
			    		ans[0]=2;
			    		ans.pb(2);
			    	}

			    	int temp=1;
			    		for(int i=start; i<n; i++)
			    		{
			    			if(i%2==0 ){
			    				ans.pb(1);
			    				temp=1;
			    			}
			    			else
			    			{
			    				temp=2;
			    				ans.pb(2);
			    			}
			    			if(k==i)
			    			{
			    				if(k!=n-1)
			    					ans.pb(1);
			    				ans[(i+1)%n]=temp;
			    				break;
			    			}

		    			}
		    			// pr(ans);
		    			if(k==n-1 or k==n-2)
		    				goto print;
		    			for(int i=k+2; i<n; i++)
		    			{
		    				if(temp==1)
		    				{
		    					 ans.pb(2);
		    					 temp=2;
		    				}
		    				else
		    				{
		    					ans.pb(1);
		    					temp=1;
		    				}

		    			}
		    			print:
				    		for(int i=0; i<n; i++)
				    			pint(ans[i]);
				    		cout<<endl;
				    		goto end;

		    }

		    end:
		    {}
        }
}