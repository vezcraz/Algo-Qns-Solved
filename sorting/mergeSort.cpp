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

//#define cerr cout
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

template <class T> ostream &operator <<(ostream &os, const vector<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T> ostream &operator <<(ostream &os, const unordered_set<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T> ostream &operator <<(ostream &os, const set<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T> ostream &operator <<(ostream &os, const multiset<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class S, class T> ostream &operator <<(ostream &os, const pair<S, T> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}
template <class S, class T> ostream &operator <<(ostream &os, const unordered_map<S, T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class S, class T> ostream &operator <<(ostream &os, const map<S, T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T> void dbs(string str, T t)
{
    cerr << str << " : " << t << "\n";
}
template <class T, class... S> void dbs(string str, T t, S... s)
{
    int idx = str.find(',');
    cerr << str.substr(0, idx) << " : " << t << ", ";
    dbs(str.substr(idx + 1), s...);
}
template <class T> T mx(T t)
{
    return t;
}
template <class T, class... S> T mx(T t, S... s)
{
    T tt = mx(s...);
    return (t) > (tt) ? (t) : (tt);
}
template <class T> T mn(T t)
{
    return t;
}
template <class T, class... S> T mn(T t, S... s)
{
    T tt = mn(s...);
    return (t) < (tt) ? (t) : (tt);
}
template <class T, class Op> T acc(Op op, T t)
{
    return t;
}
template <class T, class Op, class... S> T acc(Op op, T t, S... s)
{
    return op(t, acc(op, s...));
}
template <class D1, class D2> auto lambdamax()
{
    return [](D1 a, D2 b)
    {
        return (a) > (b) ? (a) : (b) ;
    } ;
}
template <class D1, class D2> auto lambdamin()
{
    return [](D1 a, D2 b)
    {
        return (a) < (b) ? (a) : (b) ;
    } ;
}

ll modExp(ll x, ll y, ll mod)
{
    x %= mod, y %= (mod - 1) ;
    ll res = 1;
    while (y)
    {
        if (y & 1) res = (res * x) % mod;
        y /= 2, x = (x * x) % mod;
    }
    return res % mod;
}
int c=0;
void sorted_merge(vi &v, int l, int mid, int r)
{
    vector<int> left(v.begin() + l, v.begin() + mid);
    vector<int> right(v.begin() + mid, v.begin() + r);
    cerr<<left<<right;
    int ni=left.size();
    int nj=right.size();
    int index = l;
    int i, j;
    for(i = 0, j = 0; i < ni and j < nj; )
    {
    	// cout<<left[i]<<sep<<right[j];
        if(left[i] <= right[j])
            v[index] = left[i++];
        else{
            v[index] = right[j++];
            c+=ni-i;
        }
        index++;
    }
    if(i<ni)
        for(int k = i; k < ni; k++)
            v[index++] = left[k];
    if(j<nj)
        for(int k = j; k < nj; k++)
            v[index++] = right[k];

}
void solve(vi &v, int l, int r)
{
    if(l >= r-1)
        return;
    int mid = l + (r - l) / 2;
    // cerr<<mid<<endl;
    solve(v, l, mid);
    solve(v, mid, r);
    sorted_merge(v, l, mid, r);

}

int32_t main()
{

#ifndef ONLINE_JUDGE 
        freopen("../input.txt", "r", stdin); 
        freopen("../output.txt", "w", stderr); 
    #endif 
    int n;
    cin >> n;
    invec(v, n);
    solve(v, 0, n);
    // sorted_merge(v,0, n/2, n);
    cerr<<v;
    cerr<<c;
    // solve(v, 0, n);
}