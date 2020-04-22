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

string reve(string s)
{
	reverse(all(s));
	return s;
}
string left_start(string s)
{
	int n=s.size();
	string temp=reve(s);
	int l=0;
	for(int i=0; i<n ; i++)
	{
		if(s[l]==temp[i])
			l++;
		else
		{
			if( l)
			{
				i-=l;
				l=0;


			}
		}
	}
	return string(s.begin(), s.begin()+l);
}

string right_start(string s)
{
	return left_start(reve(s));
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE 
        freopen("../input.txt", "r", stdin); 
        freopen("../output.txt", "w", stderr); 
        freopen("../output.txt", "w", stdout); 
    #endif 
  	tc(t)
  	{
  		string s;
  		cin>>s;
		int n=s.size();
		if(n==1 or reve(s)==s)
		{
			cout<<s<<endl;
			continue;
		}

		int mark=0;
		for(int i=0, j=n-1; i<n/2; i++, j--)
		{
			if(s[i]!=s[j]){
				break;
			}
			else
				mark++;
		}  			
		string a=string(s.begin(), s.begin()+mark);
		string b=reve(a);
		string midstring=string(s.begin()+mark, s.end()-mark);

		string ans1, mid1, mid2;
		mid1=left_start(midstring);
		mid2=right_start(midstring);

		ans1=a+(sz(mid1)>sz(mid2)?mid1:mid2)+b;
		string ans2=left_start(s);
		string ans3=right_start(s);

		string ans= (sz(ans1)>sz(ans2)?ans1:ans2);
		ans= (sz(ans)>sz(ans3)?ans:ans3);
		cout<<ans<<endl;
  	}
}