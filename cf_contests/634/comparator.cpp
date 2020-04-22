#include <bits/stdc++.h>    
//#include <ext/pb_ds/assoc_container.hpp> 
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//using namespace __gnu_pbds; 
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb  push_back
#define show(x) cout<<(#x)<<" : "<<x<<endl;
#define ll  long long
#define ld  long double
#define fill(a,val) memset(a,val,sizeof(a))
#define mp  make_pair
#define ff  first
#define ss  second
#define pii pair<ll,ll>
#define sq(x) ((x)*(x))
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define endl "\n"
#define int long long 
#define printclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";
const ll MOD     = 1000*1000*1000+7;
const ll INF     = 1ll*1000*1000*1000*1000*1000*1000 + 7;
const ll MOD2    = 998244353;
const ll N       = 1000 * 100 + 10;
const ll N2      = 70;
const ld PI  = 3.141592653589793;
//template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll gcd(ll a, ll b){if(!b)return a;return gcd(b, a % b);} 
ll power(ll x,ll y,ll p = LLONG_MAX ){ll res=1;x%=p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}
ll lcm(ll a , ll b){return (a*b)/gcd(a,b);}
int calc(int n)
{
    int res = n;
    res*=(n+1);
    res/=2;
    return res;
}
signed main()
{
    fastio();
    //cout<<fixed<<setprecision(20);
    //CHECK for LONG LONG and LONG DOUBLE
    //*comment for all except cc/cf    
    #ifndef ONLINE_JUDGE    
           freopen("../input.txt","r",stdin);
           freopen("../compans.txt","w",stdout);
    #endif//*/
    int n;
    cin>>n;
    int aa[n];
    int total = 0;
    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
        cin>>aa[i];
    }
    a.pb(0);
    a.pb(aa[0]);
    for(int i =1 ; i<n ;i++)
    {
        aa[i]+=aa[i-1];
        a.pb(aa[i]);
    }
    map<int,int> m;
    int i=0,j=0;
    n = a.size();
    while(j<n)
    {
        if(m.find(a[j])==m.end())
        {
            //cout<<"X"<<endl;

            m[a[j]]++;
            j++;
        }
        else
        {
            
            //cout<<"Y"<<endl;
            int len = j-i-1;
            total+=len;
            m.erase(a[i]);
            i++;            
        }
    }
    int len = j-i-1;
    total+=calc(len);
    cout<<total;


    printclock;
    return 0;
}
