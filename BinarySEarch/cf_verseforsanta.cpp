#include <bits/stdc++.h>
using namespace std;
#define int long long
// #define int long long

typedef unsigned long long ul ;
typedef long long ll ;
typedef string str ;
typedef pair < int, int >  pii ;
typedef pair < ll, ll>  pll ;
typedef vector < int > vi ;
typedef vector < ll > vll ;

//#define cerr cout
#define MOD 1000000007
#define vec vector
#define nl '\n'
#define is ==
#define all(v) (v).begin() , (v).end()
#define sumof(v) accumulate ( all(v) , 0LL )
#define maxof(v) max_element( all(v) )
#define minof(v) min_element( all(v) )
#define rev(v) reverse(all(v))
#define sz(v)  (long long)(v).size()
#define lp(i , n ) for ( ll i = 0 ; i < (n) ; i++ )
#define lpp(i , l , r ) for ( ll i = (l) ; i < (r) ; i++ )
#define umap unordered_map

#define F first
#define S second
#define pb push_back
#define eb emplace_back

#define tc(t) ul testcases ; cin>>testcases ; for ( int t = 1 ; t <= testcases ; t++ )
#define prntc cout<<"Case "<<testcases<<" : " ;
#define inarr(size) vll v ( size , 0 ) ; lp ( i , size ) cin>>v[i]
#define invec( vec_name ) lp ( i , sz(vec_name) ) cin>>vec_name[i]
#define debug( ds_name ) for ( auto &val : ds_name ) cerr<<val<<"_" ; cerr<<nl
#define debug1(x) cerr<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";
#define fast ios::sync_with_stdio(false); cin.tie(0);

template <class S, class T>ostream &operator <<(ostream &os, const pair<S, T> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}
template <class T>ostream &operator <<(ostream &os, const vector<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T>ostream &operator <<(ostream &os, const unordered_set<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class S, class T>ostream &operator <<(ostream &os, const unordered_map<S, T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T>ostream &operator <<(ostream &os, const set<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T>ostream &operator <<(ostream &os, const multiset<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class S, class T>ostream &operator <<(ostream &os, const map<S, T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
#define PI 3.1415926

int s;
bool p(int mid, vi v, vi pref, vi maxx)
{

    if(pref[mid] - maxx[mid] > s)
        return true;
    else
        return false;
}

int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n >> s;

        vi v;
        vi pref_sum;
        vi maxx;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.pb(x);
        }
        int temp = 0;

        for(int i=0; i<n; i++)
        {
            temp+= v[i];
            pref_sum.pb(temp);
        }
        
        int m=v[0];
        for(int i=0; i<n; i++)
        {
            m = max(m,v[i]);
            maxx.pb(m);
        }
       
        // cout << v << endl;
        if(sumof(v) <= s)
        {
            cout << 0 << endl;

        }
        else if(sumof(v) <= s + *max_element(all(v)))
        {
            cout << max_element(all(v)) - v.begin() + 1<< endl;

        }
        else
        {
            int hi = n - 1;
            int lo = 0;

            int mid;

            while(1)
            {
                mid = lo + (hi - lo) / 2;
                if(hi <= lo )
                    break;
                if(!p(mid, v, pref_sum, maxx) and p(mid + 1, v, pref_sum, maxx))
                    break;
                if(p(mid, v, pref_sum, maxx))
                    hi = mid;
                else
                    lo = mid;
            }
            // cout<<mid<<endl<<v[mid]<<endl;
            cout << max_element(v.begin(), v.begin() + mid + 1) - v.begin() + 1 << endl;
        }


    }
}